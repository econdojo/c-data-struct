#include "heap.h"

// Define an insert function
void insert(heap_t* h, int data)
{

	// Check if heap is full or not
	if (h->size < h->capacity) {
		// Insert data into an array
		h->arr[h->size] = data;
		// Call heapify bottom-up function
		insert_helper(h, h->size);
		// Incrementing size of array
		h->size++;
	}
}

// Define heapify bottom-up function
void insert_helper(heap_t* h, int index)
{
	// Store parent of element at index in parent variable
	int parent = (index - 1) / 2;

	if (h->arr[parent] < h->arr[index]) {
		// Swap when child is smaller than parent element
		int temp = h->arr[parent];
		h->arr[parent] = h->arr[index];
		h->arr[index] = temp;

		// Recursively call heapify bottom-up
		insert_helper(h, parent);
	}
}