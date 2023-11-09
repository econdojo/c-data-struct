#include <string.h>
#include "table.h"

unsigned int hash(const char *key) {
    unsigned long int value = 0;
    unsigned int i = 0;
    unsigned int key_len = strlen(key);

    // do several rounds of multiplication
    for (; i < key_len; i++) {
        value = value * 37 + key[i];
    }

    // make sure 0 <= value < TABLE_SIZE
    value = value % TABLE_SIZE;

    return value;
}