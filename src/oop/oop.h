// Object oriented programming in C
// Reference: https://www.youtube.com/watch?v=cR2QFQbssa0&list=PLvsr8Nz5WefPfhrmbVPvx58tLXkgAhKiG&index=59

#ifndef OOP_H
#define OOP_H

#include <stdlib.h>
#include <stdio.h>

typedef struct array {
    struct array *self;  // pointer to 'self', i.e., 'this'
    int *data;  // member variables
    size_t size;

    void (*pfnSet)(struct array*, size_t, int); // member functions
    int (*pfnGet)(struct array*, size_t);
} array_t;

int array_get(array_t *self, size_t index);
void array_set(array_t *self, size_t index, int value);
array_t *array_create(size_t size);  // constructor
void array_destroy(array_t *self);  // destructor

#endif