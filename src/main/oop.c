#include "main.h"

int oop(void) {
    array_t *arr = array_create(10);
    for(int i = 0; i < arr->size; i++) {
        arr->pfnSet(arr->self, i, i);
    }
    for(int i = 0; i < arr->size; i++) {
        printf("%d\n", arr->pfnGet(arr->self, i));
    }
    array_destroy(arr);
    return 0;
}