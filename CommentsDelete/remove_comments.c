#include <stdio.h>

/* 定义状态常量 */
#define NORMAL 0
#define SLASH 1            /* 读到了一个 / */
#define BLOCK_COMMENT 2    /* 在块注释中 */
#define BLOCK_COMMENT_STAR 3 /* 在块注释中读到了 * */
#define LINE_COMMENT 4     /* 在单行注释中 */
#define STRING 5           /* 在双引号字符串中 */
#define CHAR_CONST 6       /* 在单引号字符常量中 */

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
                    /* 不是注释，是除号或其他 */
                    fputc('/', out);
                    fputc(c, out);
                    /* 需要检查 c 是否开启了字符串或字符常量 */
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
                /* 忽略注释内容 */
                break;

            case BLOCK_COMMENT_STAR:
                if (c == '/') {
                    state = NORMAL;
                    /* 替换为空格? 通常C预处理器会将注释替换为一个空格，
                       但简单的删除也可以。这里我们替换为空格以防粘连 */
                    fputc(' ', out); 
                } else if (c == '*') {
                    /* 仍然在可能的结束序列中，如 /***** */
                    state = BLOCK_COMMENT_STAR;
                } else {
                    state = BLOCK_COMMENT;
                }
                break;

            case LINE_COMMENT:
                if (c == '\n') {
                    fputc(c, out); /* 保留换行符 */
                    state = NORMAL;
                }
                /* 忽略注释内容 */
                break;

            case STRING:
                fputc(c, out);
                if (c == '"') {
                    state = NORMAL;
                } else if (c == '\\') {
                    /* 处理转义字符，避免 \" 被误判为结束 */
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
                    /* 处理转义字符，避免 \' 被误判为结束 */
                    if ((c = fgetc(in)) != EOF) {
                        fputc(c, out);
                    }
                }
                break;
        }
    }
    
    /* 处理文件结束时还在 SLASH 状态的情况 (例如文件末尾是 /) */
    if (state == SLASH) {
        fputc('/', out);
    }
}

int main() {
    remove_comments(stdin, stdout);
    return 0;
}
