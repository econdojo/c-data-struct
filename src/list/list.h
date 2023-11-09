#ifndef LIST_H // linked list
#define LIST_H

typedef struct list_node {
    int data;
    struct list_node *next;
} node_t;

void print_list(node_t *head);

void insert_node(node_t **p_head, int data, int n);

void delete_node(node_t **p_head, int n);

#endif