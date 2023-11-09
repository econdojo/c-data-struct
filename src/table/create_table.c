#include <stdlib.h>
#include "table.h"

table_t *create_table(void) {
    // allocate table
    table_t *ht = malloc(sizeof(table_t) * 1);

    // allocate table entries
    ht->entries = malloc(sizeof(entry_t*) * TABLE_SIZE);

    // set each to null
    int i = 0;
    for (; i < TABLE_SIZE; i++) {
        ht->entries[i] = NULL;
    }

    return ht;
}