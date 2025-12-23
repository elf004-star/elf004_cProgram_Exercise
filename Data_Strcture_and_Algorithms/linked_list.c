#include <stdio.h>
#include <stdlib.h>

int main(void) {
    struct LNode {
        int data;
        struct LNode *next;
    };

    struct LNode *head, *middle, *last;

    head = (struct LNode *)malloc(sizeof(struct LNode));
    middle = (struct LNode *)malloc(sizeof(struct LNode));
    last = (struct LNode *)malloc(sizeof(struct LNode));

    head->data = 10;
    middle->data = 20;
    last->data = 30;

    head->next = middle;
    middle->next = last;
    last->next = NULL;

    struct LNode *temp = head;

    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");

    return 0;
}
