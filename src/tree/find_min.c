#include <stdlib.h>
#include "tree.h"

int find_min(bst_node *root) {
    if (root == NULL) {
        return -1;
    }
    else if (root->left == NULL) {
        return root->data;
    }
    return find_min(root->left);
}