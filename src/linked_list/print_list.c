#include <stdio.h>
#include "linked_list.h"

void print_list(node_t *head) {
    node_t *temp = head;
    while (temp != NULL) {
        printf("%d - ", temp->value);
        temp = temp->next;
    }
    printf("\n");
}