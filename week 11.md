## Week 11: Graph Clustering and Partitioning

### 1. Graph Clustering
Clustering identifies "communities" where nodes share many internal connections.
- **Method:** Louvain Algorithm (Modularity Maximization).
- **Goal:** To maximize the internal edges of a cluster while minimizing external edges.

### 2. Graph Separation (Partitioning)
Separation focuses on "cutting" the graph into distinct, often equal-sized, segments.
- **Spectral Partitioning:** Uses the Laplacian Matrix and Eigenvectors to find the optimal cut.
- **Min-Cut Logic:** Identifying the bottleneck edges that link different clusters.
- **Algorithm:** Girvan-Newman (Removing "bridges" based on Edge Betweenness centrality).

### Comparison
| Feature | Clustering | Separation (Partitioning) |
| :--- | :--- | :--- |
| **Primary Goal** | Finding natural communities. | Dividing the graph into $k$ parts. |
| **Logic** | Edge Density. | Minimum Cut / Bridges. |
| **Key Algorithm** | Louvain / K-Means. | Spectral / Min-Cut. |
