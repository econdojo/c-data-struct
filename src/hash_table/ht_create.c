#include <stdlib.h>
#include "hash_table.h"

#define TABLE_SIZE 20000

ht_t *ht_create(void) {
    // allocate table
    ht_t *hashtable = malloc(sizeof(ht_t) * 1);

    // allocate table entries
    hashtable->entries = malloc(sizeof(entry_t*) * TABLE_SIZE);

    // set each to null (needed for proper operation)
    int i = 0;
    for (; i < TABLE_SIZE; ++i) {
        hashtable->entries[i] = NULL;
    }

    return hashtable;
}