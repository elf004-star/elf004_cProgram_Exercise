#include <stdio.h>

#define MAX_STACK 1000

// 简单的栈结构，用于存储括号
int stack[MAX_STACK];
int top = -1; // 栈顶指针

// 入栈操作
void push(int c) {
    if (top < MAX_STACK - 1) {
        stack[++top] = c;
    } else {
        printf("Error: Stack overflow (nesting too deep)\n");
    }
}

// 出栈操作
int pop() {
    if (top >= 0) {
        return stack[top--];
    }
    return -1; // 栈为空
}

// 检查栈是否为空
int is_empty() {
    return top == -1;
}

// 查看栈顶元素
int peek() {
    if (top >= 0) {
        return stack[top];
    }
    return -1;
}

int main() {
    int c;

    // 状态标志
    int in_comment_block = 0; // 是否在 /* ... */ 中
    int in_comment_line = 0;  // 是否在 // ... 中
    int in_string = 0;        // 是否在 " ... " 中
    int in_char = 0;          // 是否在 ' ... ' 中
    int escape = 0;           // 上一个字符是否是转义符 \

    int line = 1;             // 行号计数

    printf("Starting syntax check (press Ctrl+Z then Enter on Windows or Ctrl+D on Linux to finish input):\n");

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            line++;
        }

        // 1. 处理转义字符 \
        // 如果处于字符串或字符常量中，\ 会转义下一个字符（包括引号）
        if (escape) {
            escape = 0;
            continue;
        }

        // 2. 处理字符串 "..."
        if (in_string) {
            if (c == '\\') {
                escape = 1;
            } else if (c == '"') {
                in_string = 0; // 字符串结束
            }
            continue; // 字符串内部的内容不进行语法检查
        }

        // 3. 处理字符常量 '...'
        if (in_char) {
            if (c == '\\') {
                escape = 1;
            } else if (c == '\'') {
                in_char = 0; // 字符常量结束
            }
            continue;
        }

        // 4. 处理块注释 /* ... */
        if (in_comment_block) {
            if (c == '*') {
                int next = getchar();
                if (next == '/') {
                    in_comment_block = 0; // 块注释结束
                } else {
                    ungetc(next, stdin); // 不是结束符，放回流中
                }
            }
            continue;
        }

        // 5. 处理行注释 // ...
        if (in_comment_line) {
            if (c == '\n') {
                in_comment_line = 0; // 行注释随换行结束
            }
            continue;
        }

        // 6. 普通代码区域的处理

        // 检查注释开始
        if (c == '/') {
            int next = getchar();
            if (next == '*') {
                in_comment_block = 1;
                continue;
            } else if (next == '/') {
                in_comment_line = 1;
                continue;
            } else {
                ungetc(next, stdin);
            }
        }

        // 检查字符串/字符常量开始
        if (c == '"') {
            in_string = 1;
            continue;
        }
        if (c == '\'') {
            in_char = 1;
            continue;
        }

        // 7. 检查括号匹配
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
                    printf("Line %d: Mismatched '%c', expected closing for '%c'\n", line, c, expected);
                    pop(); // 弹出不匹配的项以尝试恢复同步
                }
            }
        }
    }

    // 检查是否有未闭合的括号
    while (!is_empty()) {
        int left = pop();
        printf("Error: Unmatched opening '%c' (remaining in stack)\n", left);
    }

    // 检查是否有未闭合的注释或引用
    if (in_comment_block)
        printf("Error: Block comment /* not closed\n");
    if (in_string)
        printf("Error: String \"... not closed\n");
    if (in_char)
        printf("Error: Char constant '... not closed\n");

    return 0;
}
