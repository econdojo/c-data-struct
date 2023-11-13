#include "graph.h"

graph_t *create_graph(edge edges[], int n)
{
    // allocate storage for the graph data structure
    graph_t *g = (graph_t *) malloc(sizeof(graph_t));
 
    // initialize head pointer for all vertices
    for (int i = 0; i < N; i++) {
        g->head[i] = NULL;
    }
 
    // add edges to the directed graph one by one
    for (int i = 0; i < n; i++)
    {
        // get the source and destination vertex
        int src = edges[i].src;
        int dest = edges[i].dest;
 
        // allocate a new node of adjacency list from src to dest
        node *temp = (node *) malloc(sizeof(node));
        temp->dest = dest;
 
        // point new node to the current head
        temp->next = g->head[src];
 
        // point head pointer to the new node
        g->head[src] = temp;
    }
 
    return g;
}