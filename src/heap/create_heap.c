#include "heap.h"

// Define a create_heap function
heap_t* create_heap(int size, int capacity, int* nums) {
	// Allocating memory to heap h
	heap_t* h = (heap_t*) malloc(sizeof(heap_t));

	// Checking if memory is allocated to h or not
	if (h == NULL) {
		printf("Memory error");
		return NULL;
	}
	// set the values to size and capacity
	h->size = size;
	h->capacity = capacity;

	// Allocating memory to array
	h->arr = (int*) malloc(capacity * sizeof(int));

	// Checking if memory is allocated to h or not
	if (h->arr == NULL) {
		printf("Memory error");
		return NULL;
	}
	int i;
	for (i = 0; i < size; i++) {
		h->arr[i] = nums[i];
	}

	i = (h->size - 2) / 2; // start from the first index of non-leaf node
	while (i >= 0) {
		heapify(h, i);
		i--;
	}
	return h;
}