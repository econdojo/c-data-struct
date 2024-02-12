#include "oop.h"

array_t *array_create(size_t size) {
    array_t *self = (array_t*)malloc(sizeof(array_t));
    if(self == NULL) {
        return NULL;
    }
    self->self = self;
    self->data = (int*)malloc(size * sizeof(int));
    if(self->data == NULL) {
        free(self);
        return NULL;
    }
    self->size = size;
    self->pfnSet = array_set;
    self->pfnGet = array_get;
    return self;
}