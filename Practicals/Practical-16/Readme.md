# Dijkstra's Algorithm

## Overview

Dijkstra's Algorithm is used to find the shortest path between two vertices in a graph. Unlike the minimum spanning tree, the shortest path between two vertices in Dijkstra's Algorithm might not include all the vertices of the graph.

## How Dijkstra's Algorithm Works

Dijkstra's Algorithm relies on the shortest subpath property, which states that any subpath \(B \rightarrow D\) of the shortest path \(A \rightarrow D\) is also the shortest path between vertices \(B\) and \(D\). 

### Key Steps:

1. **Initialization**: Start by assigning an infinite path value to every vertex except the starting vertex, which gets a path value of zero.
2. **Visit Neighbors**: For each vertex, update the path lengths of its neighbors. Only update if the new path length is shorter.
3. **Choose the Next Vertex**: Pick the unvisited vertex with the smallest path length.
4. **Repeat**: Continue until all vertices have been visited.

The algorithm employs a greedy approach, making the locally optimal choice at each step with the hope of finding the global optimum.

## Example

1. **Start with a weighted graph.**
2. **Select a starting vertex and set its path length to zero. Assign infinity to all other vertices.**
3. **Iterate through each vertex and update the path lengths of its neighbors.**
4. **If a shorter path to a neighbor is found, update the neighbor's path length.**
5. **Avoid re-evaluating already visited vertices.**
6. **After each iteration, choose the unvisited vertex with the smallest path length.**
7. **Repeat the process until all vertices are visited.**

## Pseudocode

```plaintext
function dijkstra(G, S)
    for each vertex V in G
        distance[V] <- infinite
        previous[V] <- NULL
        if V != S, add V to Priority Queue Q
    distance[S] <- 0
    
    while Q is not empty
        U <- Extract MIN from Q
        for each unvisited neighbor V of U
            tempDistance <- distance[U] + edge_weight(U, V)
            if tempDistance < distance[V]
                distance[V] <- tempDistance
                previous[V] <- U
    return distance[], previous[]
```

## Complexity

- **Time Complexity**: \(O(E \log V)\), where \(E\) is the number of edges and \(V\) is the number of vertices.
- **Space Complexity**: \(O(V)\)

## Applications

- Finding the shortest path in a graph
- Social networking applications
- Telephone networks
- Mapping and navigation systems
