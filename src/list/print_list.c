#include "list.h"

void print_list(node_t *head) {
    printf("\n[");
    while (head != NULL) {
        printf(" %d ", head->data);
        head = head->next;
    }
    printf("]\n");
}