#include <stdio.h>
#include <stdlib.h>

typedef struct BiTNode {
    char data;
    struct BiTNode *lchild, *rchild;
} BiTNode, *BiTree;

int main(void) {
    BiTree root = NULL;
    root = (BiTree)malloc(sizeof(BiTNode));
    root->data = 'A';
    root->lchild = NULL;
    root->rchild = NULL;

    BiTNode *BNode = NULL;
    BNode = (BiTNode *)malloc(sizeof(BiTNode));
    BNode->data = 'B';
    BNode->lchild = NULL;
    BNode->rchild = NULL;

    root->lchild = BNode;

    BiTNode *CNode = NULL;
    CNode = (BiTNode *)malloc(sizeof(BiTNode));
    CNode->data = 'C';
    CNode->lchild = NULL;
    CNode->rchild = NULL;

    root->rchild = CNode;
    printf("OK!\n");
    return 0;
}
