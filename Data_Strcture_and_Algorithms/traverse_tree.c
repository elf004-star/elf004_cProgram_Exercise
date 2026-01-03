#include <stdio.h>

int main(void) {
    printf("traverse_tree\n");
    return 0;
}

void inOrder() {
    if (root == NULL) {
        return;
    }


    inOrder(root->left);
    printf("%d", root->data);
    inOrder(root->right);
}
