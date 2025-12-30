#include <stdio.h>
#include <stdlib.h>

typedef struct LNode {
    int data;
    struct LNode *next;
} LNode, *Linklist;

Linklist head = NULL;

void insertHead(int e);
void initlink(void);

int main(void) {
    int a, b, c;

    initlink();

    LNode *temp = head;

    a = 10;
    b = 20;
    c = 30;

    insertHead(a);
    insertHead(b);
    insertHead(c);

    temp = head->next;

    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");

    return 0;
}

void initlink(void) {
    head = (Linklist)malloc(sizeof(LNode));
    head->data = 0;
    head->next = NULL;
}

void insertHead(int e) {
    LNode *newNode = (Linklist)malloc(sizeof(LNode));
    newNode->data = e;
    newNode->next = head->next;

    head->data += 1;
    head->next = newNode;
}
