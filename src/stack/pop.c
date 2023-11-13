#include "stack.h"

void pop(node_t **p_top) {
    if(*p_top == NULL) {
        return;
    }
    node_t *temp = *p_top;
    *p_top = (*p_top)->next;
    free(temp);
}