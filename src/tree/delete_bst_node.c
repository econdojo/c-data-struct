#include "tree.h"

bst_node *delete_bst_node(bst_node *root, int data) {
    if (root == NULL) {
        return root;
    }
    else if (data < root->data) {
        root->left = delete_bst_node(root->left, data);
    }
    else if (data > root->data) {
        root->right = delete_bst_node(root->right, data);
    }
    else {
        // Case 1: No child
        if (root->left == NULL && root->right == NULL) {
            free(root);
            root = NULL;
        }
        // Case 2: One child
        else if (root->left == NULL) {
            bst_node *temp = root;
            root = root->right;
            free(temp);
        }
        else if (root->right == NULL) {
            bst_node *temp = root;
            root = root->left;
            free(temp);
        }
        // Case 3: Two children
        else {
            int min = find_min(root->right);
            root->data = min;
            root->right = delete_bst_node(root->right, min);
        }
    }
    return root;
}