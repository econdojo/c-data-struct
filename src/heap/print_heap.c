#include "heap.h"

void print_heap(heap_t* h)
{
    for (int i = 0; i < h->size; i++) {
        printf("%d ", h->arr[i]);
    }
    printf("\n");
}