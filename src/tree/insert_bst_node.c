#include <stdlib.h>
#include "tree.h"

bst_node *insert_bst_node(bst_node *root, int data) {
    if (root == NULL) {
        root = (bst_node *) malloc(sizeof(bst_node));
        root->data = data;
        root->left = NULL;
        root->right = NULL;
    } else if (data <= root->data) {
        root->left = insert_bst_node(root->left, data);
    } else {
        root->right = insert_bst_node(root->right, data);
    }
    return root;
}