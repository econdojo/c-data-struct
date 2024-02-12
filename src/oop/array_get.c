#include "oop.h"

int array_get(array_t *self, size_t index) {
    return self->data[index];
}