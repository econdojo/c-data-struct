#include "../linked_list/linked_list.h"

#ifndef QUEUE_H
#define QUEUE_H

void enqueue(node_t **p_head, node_t **p_tail, int data);

void dequeue(node_t **p_head);

#endif