#include <stdlib.h>
#include <stdbool.h>
#include "tree.h"

bool search_bst_node(bst_node *root, int data) {
    if(root == NULL) {
        return false;
    } else if(root->data == data) {
        return true;
    } else if(data <= root->data) {
        return search_bst_node(root->left, data);
    } else {
        return search_bst_node(root->right, data);
    }
}