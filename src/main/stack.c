#include "main.h"

int stack(void) {
    node_t *top = NULL;
    push(&top, 2);
    push(&top, 4);
    push(&top, 3);
    push(&top, 5);
    print_list(top);
    pop(&top);
    print_list(top);
    return 0;
}