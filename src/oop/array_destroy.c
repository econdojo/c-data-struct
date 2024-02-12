#include "oop.h"

void array_destroy(array_t *self) {
    if(self == NULL) {
        return;
    }
    if(self->data != NULL) {
        free(self->data);
    }
    free(self);
}