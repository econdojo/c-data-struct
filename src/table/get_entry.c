#include <stdlib.h>
#include <string.h>
#include "table.h"

char *get_entry(table_t *ht, const char *key) {
    unsigned int slot = hash(key);

    // try to find a valid slot
    entry_t *entry = ht->entries[slot];

    // no slot means no entry
    if (entry == NULL) {
        return NULL;
    }

    // walk through each entry in the slot, which could just be a single thing
    while (entry != NULL) {
        // return value if found
        if (strcmp(entry->key, key) == 0) {
            return entry->value;
        }

        // proceed to next key if available
        entry = entry->next;
    }

    // reaching here means there were >= 1 entries but no key match
    return NULL;
}