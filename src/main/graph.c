// Directed graph using adjacency list
#include "../graph/graph.h"

int graph(void)
{
    // input array containing edges of the graph (as per the above diagram)
    // (x, y) pair in the array represents an edge from x to y
    edge edges[] =
    {
        {0, 1}, {1, 2}, {2, 0}, {2, 1}, {3, 2}, {4, 5}, {5, 4}
    };
 
    // calculate the total number of edges
    int n = sizeof(edges)/sizeof(edges[0]);
 
    // construct a graph from the given edges
    graph_t *g = create_graph(edges, n);
 
    // Function to print adjacency list representation of a graph
    print_graph(g);
 
    return 0;
}