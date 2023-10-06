// Inorder traverse

#include <stdio.h>
#include "tree.h"

void print_tree(bst_node *root) {
    if (root == NULL) {
        return;
    }
    print_tree(root->left);
    printf("%d\n", root->data);
    print_tree(root->right);
}