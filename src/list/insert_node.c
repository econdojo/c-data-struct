#include "list.h"

void insert_node(node_t **p_head, int data, int n) {
   node_t *temp1 = (node_t *) malloc(sizeof(node_t));
   temp1->data = data;
   temp1->next = NULL;
   if (n == 1) {
      temp1->next = *p_head;
      *p_head = temp1;
      return;
   }
   node_t *temp2 = *p_head;
   for (int i = 0; i < n - 2; i++) {
      temp2 = temp2->next;
   }
   temp1->next = temp2->next;
   temp2->next = temp1;
}