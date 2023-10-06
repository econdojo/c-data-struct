#include <stdio.h>
#include "../tree/tree.h"

int tree(void) {
    bst_node *root = NULL;
    root = insert_bst_node(root, 15);
    root = insert_bst_node(root, 10);
    root = insert_bst_node(root, 20);
    if (search_bst_node(root, 10)) {
        printf("Found\n");
    } else {
        printf("Not found\n");
    }
    print_tree(root);
    printf("Min: %d\n", find_min(root));
    root = delete_bst_node(root, 10);
    print_tree(root);
    return 0;
}