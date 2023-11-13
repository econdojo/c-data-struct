#include "queue.h"

void dequeue(node_t **p_head) {
    if(*p_head == NULL) {
        return;
    }
    node_t *temp = *p_head;
    *p_head = (*p_head)->next;
    free(temp);
}