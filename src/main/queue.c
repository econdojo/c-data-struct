#include <stdlib.h>
#include "../queue/queue.h"

int queue(void) {
    node_t *head = NULL, *tail = NULL;
    enqueue(&head, &tail, 2);
    enqueue(&head, &tail, 4);
    enqueue(&head, &tail, 3);
    enqueue(&head, &tail, 5);
    print_list(head);
    dequeue(&head);
    print_list(head);
    return 0;
}