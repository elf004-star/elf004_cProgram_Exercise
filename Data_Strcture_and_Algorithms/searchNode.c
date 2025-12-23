#include <stdio.h>
#include <stdlib.h>

struct LNode {
    int data;
    struct LNode *next;
};

struct LNode *head = NULL;

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

struct LNode *searchNode(struct LNode *head, int key) {
    struct LNode *temp = head;
    while (temp != NULL) {
        if (temp->data == key) {
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

