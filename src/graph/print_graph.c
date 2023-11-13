#include "graph.h"

void print_graph(graph_t *g)
{
    for (int i = 0; i < N; i++)
    {
        // print current vertex and all its neighbors
        node *ptr = g->head[i];
        while (ptr != NULL)
        {
            printf("(%d —> %d)\t", i, ptr->dest);
            ptr = ptr->next;
        }
        printf("\n");
    }
}