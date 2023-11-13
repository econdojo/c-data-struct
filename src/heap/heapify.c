#include "heap.h"

void heapify(heap_t* h, int index)
{
	int left = index * 2 + 1;
	int right = index * 2 + 2;
	int max = index;

	// Check whether our left or child element is at right index to avoid index error
	if (left >= h->size || left < 0)
		left = -1;
	if (right >= h->size || right < 0)
		right = -1;

	// Store left or right element in max if any of these is smaller than its parent
	if (left != -1 && h->arr[left] > h->arr[max])
		max = left;
	if (right != -1 && h->arr[right] > h->arr[max])
		max = right;

	// Swap the nodes
	if (max != index) {
		int temp = h->arr[max];
		h->arr[max] = h->arr[index];
		h->arr[index] = temp;

		// Recursively call for their child elements to maintain max heap
		heapify(h, max);
	}
}