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

bool deleteNode (struct LNode **head, int key) {
    struct LNode *temp;
    if ((*head)->data == key) {
        temp = *head;
        *head = (*head)->next;
        free(temp);
        return true;
    } else {
        struct LNode *pre = *head;
        while (pre->next != NULL) {
            if (pre->next->data == key) {
                temp = pre->next;
                pre->next = pre->next->next;
                free(temp);
                return true;
            } else {
                pre = pre->next;
            }
        }
        return false;
    }
}
