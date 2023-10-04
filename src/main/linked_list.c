#include <stdlib.h>
#include <stdio.h>
#include "../linked_list/linked_list.h"

int linked_list(void) {
    node_t *head = NULL;
    insert_node(&head, 2, 1);
    insert_node(&head, 3, 2);
    insert_node(&head, 4, 1);
    insert_node(&head, 5, 2);
    print_list(head);
    int n;
    printf("Enter a position: ");
    scanf("%d", &n);
    delete_node(&head, n);
    print_list(head);
    return 0;
}

