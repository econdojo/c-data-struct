#include <stdlib.h>
#include "queue.h"

void enqueue(node_t **p_head, node_t **p_tail, int data) {
    node_t *temp = (node_t *) malloc(sizeof(node_t));
    temp->data = data;
    temp->next = NULL;
    if(*p_head == NULL) {
        *p_head = *p_tail = temp;
    } else {
        (*p_tail)->next = temp;
    }
    *p_tail = temp;
}