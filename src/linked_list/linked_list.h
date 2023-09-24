#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct node {
    int value;
    struct node *next;
} node_t;

/* Print linked list */
void print_list(node_t *head);

#endif