#include <stdlib.h>
#include "../linked_list/linked_list.h"

int linked_list(void) {
    node_t n1, n2, n3;
    node_t *head;
    n1.value = 45;
    n2.value = 99;
    n3.value = 12;
    head = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = NULL;
    print_list(head);
    return 0;
}

