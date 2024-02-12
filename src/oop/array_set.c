#include "oop.h"

void array_set(array_t *self, size_t index, int value) {
    if(self == NULL) {
        return;
    }
    if(index >= 0 && index < self->size) {
        self->data[index] = value;
    }
}