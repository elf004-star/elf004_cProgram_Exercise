#include <stdio.h>

/* define symbolic constant */
#define NORMAL 0
#define SLASH 1              /* read one slash */
#define BLOCK_COMMENT 2      /* in a block comment  */
#define BLOCK_COMMENT_STAR 3 /* read a * in a block comment */
#define LINE_COMMENT 4       /* in single line comment */
#define STRING 5             /* in a double-quoted string */
#define CHAR_CONST 6         /* in a single-quoted character constant */

void remove_comments(FILE *in, FILE *out) {
    int c;
    int state = NORMAL;

    while ((c = fgetc(in)) != EOF) {
        switch (state) {
        case NORMAL:
            if (c == '/') {
                state = SLASH;
            } else if (c == '"') {
                fputc(c, out);
                state = STRING;
            } else if (c == '\'') {
                fputc(c, out);
                state = CHAR_CONST;
            } else {
                fputc(c, out);
            }
            break;

        case SLASH:
            if (c == '*') {
                state = BLOCK_COMMENT;
            } else if (c == '/') {
                state = LINE_COMMENT;
            } else {
                fputc('/', out);
                fputc(c, out);

                if (c == '"') {
                    state = STRING;
                } else if (c == '\'') {
                    state = CHAR_CONST;
                } else {
                    state = NORMAL;
                }
            }
            break;

        case BLOCK_COMMENT:
            if (c == '*') {
                state = BLOCK_COMMENT_STAR;
            }
            break;

        case BLOCK_COMMENT_STAR:
            if (c == '/') {
                state = NORMAL;
                fputc(' ', out);
            } else if (c == '*') {
                state = BLOCK_COMMENT_STAR;
            } else {
                state = BLOCK_COMMENT;
            }
            break;

        case LINE_COMMENT:
            if (c == '\n') {
                fputc(c, out);
                state = NORMAL;
            }
            break;

        case STRING:
            fputc(c, out);
            if (c == '"') {
                state = NORMAL;
            } else if (c == '\\') {
                if ((c = fgetc(in)) != EOF) {
                    fputc(c, out);
                }
            }
            break;

        case CHAR_CONST:
            fputc(c, out);
            if (c == '\'') {
                state = NORMAL;
            } else if (c == '\\') {
                if ((c = fgetc(in)) != EOF) {
                    fputc(c, out);
                }
            }
            break;
        }
    }

    if (state == SLASH) {
        fputc('/', out);
    }
}

int main(void) {
    remove_comments(stdin, stdout);
    return 0;
}
