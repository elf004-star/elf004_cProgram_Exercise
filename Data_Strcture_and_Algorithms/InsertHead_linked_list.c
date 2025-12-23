#include <stdio.h>
#include <stdlib.h>

struct LNode {
    int data;
    struct LNode *next;
};

struct LNode *head = NULL;

void insertHead(int e);

int main(void) {
    int a, b, c;

    a = 10;
    b = 20;
    c = 30;

    insertHead(a);
    insertHead(b);
    insertHead(c);

    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }

    printf("\n");

    return 0;
}

void insertHead(int e) {
    struct LNode *newNode = (struct LNode *)malloc(sizeof(struct LNode));
    newNode->data = e;
    newNode->next = head;

    head = newNode;
}
