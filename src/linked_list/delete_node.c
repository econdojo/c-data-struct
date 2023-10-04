#include <stdlib.h>
#include "linked_list.h"

void delete_node(node_t **p_head, int n) {
   node_t *temp1 = *p_head;
   if (n == 1) {
       *p_head = temp1->next; // head now points to second node
       free(temp1);
       return;
   }
   int i;
   for (i = 0; i < n-2; i++) {
       temp1 = temp1->next; // temp1 points to (n-1)th node
   }
   node_t *temp2 = temp1->next; // nth node
   temp1->next = temp2->next; // (n+1)th node
   free(temp2); // delete temp2
}