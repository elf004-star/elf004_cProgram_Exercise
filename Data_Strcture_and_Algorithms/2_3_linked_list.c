#include <stdio.h>
#include <stdlib.h>

struct LNode {
    int data;
    struct LNode *next;
};

struct LNode *head = NULL;
struct LNode *tail = NULL;

void insertHead(int e);
void insertTail(int e);

int main(void) {
    int a, b, c;
    struct LNode *temp = NULL;

    a = 10;
    b = 20;
    c = 30;

    // insertHead(a);
    // insertHead(b);
    // insertHead(c);
    insertTail(a);
    insertTail(b);
    insertTail(c);

    temp = head;

    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");

    return 0;
}

// void insertHead(int e) {
//     struct LNode *newNode = (struct LNode *)malloc(sizeof(struct LNode));
//     newNode->data = e;
//     newNode->next = head;
//
//     head = newNode;
// }

void insertTail(int e) {
    struct LNode *newNode = (struct LNode *)malloc(sizeof(struct LNode));
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    }
    newNode->data = e;
    newNode->next = NULL;

    tail->next = newNode;
    tail = newNode;
}
