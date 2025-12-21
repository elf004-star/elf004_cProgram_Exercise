/*************************************************
  Exercise 1-24.
  ------------------------------------------------
  Write a program to check a C program for rudimentary syntax
  errors like unmathed parentheses, brackets and braces. Don't forget about
  quotes, both single and double, escape sequences, and comments. (This program
  is hard if you do it in full generality.)

Author: elf004
email: 1873475824@qq.com
***********************************************/

#include <stdio.h>

#define MAX_STACK 1000

// Simple stack structure for storing parentheses
int stack[MAX_STACK];
int top = -1; // Stack top pointer

// Push operation

void push(int c) {
  if (top < MAX_STACK - 1) {
    stack[++top] = c;
  } else {
    printf("Error: Stack overflow (nesting too deep)");
  }
}

// Pop operation
int pop() {
  if (top >= 0) {
    return stack[top--];
  }
  return -1; // Stack is empty
}

// Check if stack is empty
int is_empty() { return top == -1; }

// Peek at the top element of the stack
int peek() {
  if (top >= 0) {
    return stack[top];
  }
  return -1;
}

// main
int main() {
  int c;

  // State flags
  int in_comment_block = 0; // Whether inside /* ... */
  int in_comment_line = 0;  // Whether inside // ...
  int in_string = 0;        // Whether inside "..."
  int in_char = 0;          // Whether inside '...'
  int escape = 0;           // Whether previous character was escape char \

  int line = 1;             // Line number counter

  printf("Starting syntax check (press Ctrl+Z then Enter on Windows or Ctrl+D "
         "on Linux to finish input):\n");

  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      line++;
    }
    // 1. Handle escape character \

    // If inside a string or char constant, \ escapes next character (including
    // quotes)
    if (escape) {
      escape = 0;
      continue;
    }

    // 2. Handle string "..."
    if (in_string) {
      if (c == '\\') {
        escape = 1;
      } else if (c == '"') {
        in_string = 0; // String ends
      }
      continue; // Skip syntax check inside string
    }

    // 3. Handle character constant '...'
    if (in_char) {
      if (c == '\\') {
        escape = 1;
      } else if (c == '\'') {
        in_char = 0; // character constant ends
      }
      continue;
    }

    // 4. Handle block comments /*...*/
    if (in_comment_block) {
      if (c == '*') {
        int next = getchar();
        if (next == '/') {
          in_comment_block = 0; // Block comment ends
        } else {
          ungetc(next, stdin); // Not ending char, push back to stream
        }
      }
      continue;
    }

    // 5. Handle line comment // ...
    if (in_comment_line) {
      if (c == '\n') {
        in_comment_line = 0; // Line comment ends with newline
      }
      continue;
    }

    // 6. Processing in normal code region

    // Check for comment start
    if (c == '/') {
      int next = getchar();
      if (next == '*') {
        in_comment_block = 1;
        continue;
      } else if (next == '/') {
        in_comment_line = 1;
        continue;
      } else if (next == '/') {
        in_comment_line = 1;
        continue;
      } else {
        ungetc(next, stdin);
      }
    }

    // Check for string/char constant start
    if (c == '"') {
      in_string = 1;
      continue;
    }
    if (c == '\'') {
      in_char = 1;
      continue;
    }

    // 7. Check parenthesis matching
    if (c == '(' || c == '[' || c == '{') {
      push(c);
    } else if (c == ')' || c == ']' || c == '}') {
      if (is_empty()) {
        printf("Line %d: Unmatched closing '%c'\n", line, c);
      } else {
        int expected = peek();
        int match = 0;
        if (expected == '(' && c == ')')
          match = 1;
        if (expected == '[' && c == ']')
          match = 1;
        if (expected == '{' && c == '}')
          match = 1;

        if (match) {
          pop();
        } else {
          printf("Line %d: Minsmatched '%c', expected closing for '%c'\n", line,
                 c, expected);
          pop(); // Pop mismatched item to try to recover sync
        }
      }
    }
  }

  // Check for any unclosed parentheses
  while (!is_empty()) {
    int left = pop();
    printf("Error: Unmatched opening '%c' (remaining in stack)\n", left);
  }

  // Check for any unclosed comments or quoted
  if (in_comment_block)
    printf("Error: Block comment /* not closed\n");
  if (in_string)
    printf("Error: String \"... not closed\n");
  if (in_char)
    printf("Error: Char constant '... not closed\n");

  return 0;
}
