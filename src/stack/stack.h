#ifndef STACK_H
#define STACK_H

#include <stdlib.h>
#include "../list/list.h"

void push(node_t **p_top, int data);

void pop(node_t **p_top);

#endif