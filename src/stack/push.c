#include "stack.h"

void push(node_t **p_top, int data) {
    node_t *temp = (node_t *) malloc(sizeof(node_t));
    temp->data = data;
    temp->next = *p_top;
    *p_top = temp;
}