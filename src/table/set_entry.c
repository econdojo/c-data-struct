#include "table.h"

void set_entry(table_t *ht, const char *key, const char *value) {
    unsigned int slot = hash(key);

    // try to look up an entry set
    entry_t *entry = ht->entries[slot];

    // no entry means slot empty, insert immediately
    if (entry == NULL) {
        ht->entries[slot] = pair_entry(key, value);
        return;
    }

    entry_t *prev;

    // walk through each entry until either the end is
    // reached or a matching key is found
    while (entry != NULL) {
        // check key
        if (strcmp(entry->key, key) == 0) {
            // match found, replace value
            free(entry->value);
            entry->value = malloc(strlen(value) + 1);
            strcpy(entry->value, value);
            return;
        }

        // walk to next
        prev = entry;
        entry = prev->next;
    }

    // end of chain reached without a match, add new
    prev->next = pair_entry(key, value);
}