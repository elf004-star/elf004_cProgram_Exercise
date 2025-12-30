#include <stdio.h>
#include <stdlib.h>

typedef struct LNode {
    int data;
    struct LNode *next;
} LNode, *Linklist;

Linklist head = NULL;

void initlink(void);
void insertLast(int e);
void destoryLinklist(void);

int main(void) {
    int a, b, c;

    initlink();

    LNode *temp = head;

    a = 10;
    b = 20;
    c = 30;

    insertLast(a);
    insertLast(b);
    insertLast(c);

    temp = head->next;

    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n(insert at last node)\n");

    destoryLinklist();

    return 0;
}

void initlink(void) {
    head = (Linklist)malloc(sizeof(LNode));
    head->data = 0;
    head->next = NULL;
}

void insertLast(int e) {
    LNode *newNode = (Linklist)malloc(sizeof(LNode));
    LNode *temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;

    newNode->data = e;
    newNode->next = NULL;
}

void destoryLinklist(void) {
    if (head == NULL) {
        return;
    }

    LNode *temp = head;
    while (temp != NULL) {
        LNode *nextemp = NULL;
        nextemp = temp->next;
        free(temp);
        temp = nextemp;
    }
    head = NULL;
}
