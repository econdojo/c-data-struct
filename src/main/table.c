#include "../table/table.h"

int table(void) {
    table_t *ht = create_table();

    set_entry(ht, "name1", "em");
    set_entry(ht, "name2", "russian");
    set_entry(ht, "name3", "pizza");
    set_entry(ht, "name4", "doge");
    set_entry(ht, "name5", "pyro");
    set_entry(ht, "name6", "joost");
    set_entry(ht, "name7", "kalix");

    print_table(ht);
    return 0;
}