#ifndef QUEUE_H
#define QUEUE_H

#include <stdlib.h>
#include "../list/list.h"

void enqueue(node_t **p_head, node_t **p_tail, int data);

void dequeue(node_t **p_head);

#endif