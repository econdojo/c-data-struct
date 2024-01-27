#include "main.h"

int heap(void) {
    int arr[9] = {1,2,3,4,5,6,7,8,9};
    heap_t* h = create_heap(9, 9, arr); 
    print_heap(h);
    delete(h);
    print_heap(h);
    return 0;
}