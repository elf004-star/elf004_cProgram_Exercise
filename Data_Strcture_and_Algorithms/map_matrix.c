#include <stdio.h>

#define MAX_VEX 6

typedef struct {
    char vexs[MAX_VEX];
    int arc[MAX_VEX][MAX_VEX];
} MGraph;

int mian(void) {
    printf("Hello, World!\n");

    return 0;
}

void Graph_Init(MGraph *G) {
    for (int i = 0; i < MAX_VEX; i++)
        for (int j = 0; j < MAX_VEX; j++)
            G->arc[i][j] = 0;
}

int Graph_D(MGraph G, int vexIndex) {
    int d = 0;
    for (int i = 0; i < MAX_VEX; i++) {
        if (G.arc[vexIndex][i] != 0) {
            d = d + 1;
        }
    }
    return d;
}
