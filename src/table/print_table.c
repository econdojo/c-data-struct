#include <stdio.h>
#include "table.h"

void print_table(table_t *ht) {
    for (int i = 0; i < TABLE_SIZE; i++) {
        entry_t *entry = ht->entries[i];

        if (entry == NULL) {
            continue;
        }

        printf("slot[%4d]: ", i);

        for(;;) {
            printf("%s=%s ", entry->key, entry->value);

            if (entry->next == NULL) {
                break;
            }

            entry = entry->next;
        }

        printf("\n");
    }
}