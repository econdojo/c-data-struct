// Binary search tree (BST)

#include <stdbool.h>

#ifndef TREE_H
#define TREE_H

typedef struct bst_node {
    int data;
    struct bst_node *left;
    struct bst_node *right;
} bst_node;

bst_node *insert_bst_node(bst_node *root, int data);

bool search_bst_node(bst_node *root, int data);

void print_tree(bst_node *root);

int find_min(bst_node *root);

bst_node *delete_bst_node(bst_node *root, int data);

#endif