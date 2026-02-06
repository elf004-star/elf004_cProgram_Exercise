#include <stdio.h>
#include <stdlib.h>

#define V 5

typedef struct VNode {
    int data;
    struct VNode *next;
} VNode;

VNode *adjList[V];

void init() {
    for (int i = 0; i < V; i++)
        adjList[i] = NULL;
}

void addEdge(int src, int dest) {
    VNode *newNode = (VNode *)malloc(sizeof(VNode));
    newNode->data = dest;

    newNode->next = adjList[src];
    adjList[src] = newNode;
}

int main(void) {
    printf("Hello, World!\n");
    return 0;
}
