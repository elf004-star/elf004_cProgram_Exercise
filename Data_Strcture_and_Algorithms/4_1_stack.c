#include <stdio.h>
#define size 3

int stack[size];
int top = -1;

void push(int e);
void pop(void);
void myshow(int stack[]);

int main(void) {
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;

    push(a);
    myshow(stack);

    push(b);
    myshow(stack);

    push(c);
    myshow(stack);

    push(d);
    myshow(stack);

    pop();
    myshow(stack);

    pop();
    myshow(stack);

    pop();
    myshow(stack);

    pop();
    myshow(stack);

    return 0;
}

void push(int e) {
    if (top == size - 1) {
        printf("入栈失败，栈已满\n");
        return;
    }

    top = top + 1;
    stack[top] = e;
}

void pop(void) {
    if (top == -1) {
        printf("出栈失败，栈为空\n");
        return;
    }

    top = top - 1;
}

void myshow(int stack[]) {
    if (top == -1) {
        printf("出栈失败，栈为空\n");
        return;
    }
    for (int i = 0; i <= top; ++i) {
        printf("%d\n", stack[i]);
    }
    printf("*****************************\n");
}
