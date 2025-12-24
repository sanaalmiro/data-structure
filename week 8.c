#include <stdio.h>

#define V 5 // Number of vertices

// Extracts a cluster using a basic Reachability check (Simplified BFS logic)
void extractCluster(int graph[V][V], int startNode) {
    int visited[V] = {0};
    int queue[V], front = 0, rear = 0;

    queue[rear++] = startNode;
    visited[startNode] = 1;

    printf("Cluster containing node %d: ", startNode);
    while (front < rear) {
        int u = queue[front++];
        printf("%d ", u);

        for (int v = 0; v < V; v++) {
            if (graph[u][v] == 1 && !visited[v]) {
                visited[v] = 1;
                queue[rear++] = v;
            }
        }
    }
    printf("\n");
}

int main() {
    // Adjacency Matrix representing a graph with two separate clusters: (0,1,2) and (3,4)
    int graph[V][V] = {
        {0, 1, 1, 0, 0},
        {1, 0, 1, 0, 0},
        {1, 1, 0, 0, 0},
        {0, 0, 0, 0, 1},
        {0, 0, 0, 1, 0}
    };
    extractCluster(graph, 0);
    extractCluster(graph, 3);
    return 0;
}
