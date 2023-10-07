#ifndef GRAPH_H
#define GRAPH_H

// Define the maximum number of vertices in the graph
#define N 6
 
// Data structure to store a graph object
typedef struct graph_t
{
    // An array of pointers to Node to represent an adjacency list
    struct node *head[N];
} graph_t;
 
// Data structure to store adjacency list nodes of the graph
typedef struct node
{
    int dest;
    struct node *next;
} node;
 
// Data structure to store a graph edge
typedef struct edge {
    int src, dest;
} edge;

// Function to create an adjacency list from specified edges
graph_t *create_graph(edge edges[], int n);

// Function to print adjacency list representation of a graph
void print_graph(graph_t *g);

#endif