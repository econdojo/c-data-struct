#ifndef HEAP_H // max heap
#define HEAP_H

#include <stdlib.h>
#include <stdio.h>

typedef struct heap {
	int* arr;
	int size;
	int capacity;
} heap_t;

heap_t* create_heap(int size, int capacity, int* nums);

void delete(heap_t* h);

void heapify(heap_t* h, int index);

void insert(heap_t* h, int data);

void insert_helper(heap_t* h, int index);

void print_heap(heap_t* h);

#endif