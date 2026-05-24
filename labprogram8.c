#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

#define V 5

// Function to find the vertex with minimum key value
int minKey(int key[], bool mstSet[])
{
    int min = INT_MAX;
    int min_index;

    for (int v = 0; v < V; v++)
    {
        if (mstSet[v] == false && key[v] < min)
        {
            min = key[v];
            min_index = v;
        }
    }

    return min_index;
}

// Function to print the constructed MST
void printMST(int parent[], int graph[V][V])
{
    printf("Edge \tWeight\n");

    for (int i = 1; i < V; i++)
    {
        printf("%d - %d \t%d\n",
               parent[i], i,
               graph[i][parent[i]]);
    }
}

// Function to construct MST using Prim's Algorithm
void primMST(int graph[V][V])
{
    int parent[V];      // Stores constructed MST
    int key[V];         // Key values used to pick minimum weight edge
    bool mstSet[V];     // To represent set of vertices included in MST

    // Initialize all keys as INFINITE
    for (int i = 0; i < V; i++)
    {
        key[i] = INT_MAX;
        mstSet[i] = false;
    }

    // First vertex is always included in MST
    key[0] = 0;
    parent[0] = -1;

    // MST will have V vertices
    for (int count = 0; count < V - 1; count++)
    {
        // Pick minimum key vertex not yet included in MST
        int u = minKey(key, mstSet);

        // Add selected vertex to MST
        mstSet[u] = true;

        // Update key and parent values of adjacent vertices
        for (int v = 0; v < V; v++)
        {
            if (graph[u][v] &&
                mstSet[v] == false &&
                graph[u][v] < key[v])
            {
                parent[v] = u;
                key[v] = graph[u][v];
            }
        }
    }

    // Print the MST
    printMST(parent, graph);
}

int main()
{
    int graph[V][V] =
    {
        {0, 2, 0, 6, 0},
        {2, 0, 3, 8, 5},
        {0, 3, 0, 0, 7},
        {6, 8, 0, 0, 9},
        {0, 5, 7, 9, 0}
    };

    primMST(graph);

    return 0;
}