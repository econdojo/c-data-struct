#ifndef HASH_TABLE_H
#define HASH_TABLE_H

/* Code adapted from engineer man: 
https://github.com/engineer-man/youtube/blob/master/077/hashtable.c */

#define TABLE_SIZE 20000

typedef struct entry {
    char *key;
    char *value;
    struct entry *next;
} entry_t;

typedef struct table {
    entry_t **entries;
} table_t;

unsigned int hash(const char *key);

entry_t *pair_entry(const char *key, const char *value);

table_t *create_table(void);

void set_entry(table_t *ht, const char *key, const char *value);

char *get_entry(table_t *ht, const char *key);

void delete_entry(table_t *ht, const char *key);

void print_table(table_t *ht);

#endif