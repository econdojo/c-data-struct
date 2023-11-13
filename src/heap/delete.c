#include "heap.h"

void delete(heap_t* h)
{
	int delete_item;

	// Check if the heap is empty or not
	if (h->size == 0) {
		printf("\nHeap id empty.");
		return;
	}

	// Store the node in delete_item that is to be deleted
	delete_item = h->arr[0];

	// Replace the deleted node with the last node
	h->arr[0] = h->arr[h->size - 1];
	// Decrement the size of heap
	h->size--;

	// Call heapify top-down for 0th index to maintain the heap property
	heapify(h, 0);
}