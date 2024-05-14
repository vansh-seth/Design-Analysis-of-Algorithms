# Depth First Search (DFS)

Depth First Search (DFS) or Depth First Traversal is a recursive algorithm used for searching all the vertices in a graph or tree data structure. Traversal means visiting all the nodes of a graph.

## DFS Algorithm

In a standard DFS implementation, each vertex of the graph is categorized as either:

- Visited
- Not Visited

The goal of the algorithm is to mark each vertex as visited while avoiding cycles.

### Steps of the DFS Algorithm

1. **Initialization**: Start by placing any one of the graph's vertices on top of a stack.
2. **Visiting**: Take the top item of the stack and add it to the visited list.
3. **Exploration**: Create a list of adjacent nodes for that vertex. Add the unvisited adjacent nodes to the top of the stack.
4. **Repetition**: Repeat steps 2 and 3 until the stack is empty.

## Example of DFS

Consider an undirected graph with 5 vertices. The traversal starts from vertex 0. The DFS algorithm proceeds as follows:

1. **Start at vertex 0**: Mark vertex 0 as visited and add its adjacent vertices to the stack.
2. **Move to vertex 1**: Visit vertex 1 (the top of the stack), and explore its adjacent nodes. Since vertex 0 is already visited, move to vertex 2.
3. **Move to vertex 2**: Visit vertex 2, and since it has an unvisited adjacent vertex 4, add vertex 4 to the stack.
4. **Move to vertex 4**: Visit vertex 4. Continue this process.
5. **Complete the traversal**: After visiting the last element, vertex 3, which has no unvisited adjacent nodes, the traversal is complete.

## DFS Pseudocode (Recursive Implementation)

```plaintext
DFS(G, u)
    u.visited = true
    for each v ∈ G.Adj[u]
        if v.visited == false
            DFS(G, v)
     
init() {
    For each u ∈ G
        u.visited = false
    For each u ∈ G
        DFS(G, u)
}
```

In the `init()` function, we run the DFS function on every node to ensure that we cover every vertex, especially if the graph has disconnected parts.

## Complexity of DFS

- **Time Complexity**: O(V + E), where V is the number of vertices and E is the number of edges.
- **Space Complexity**: O(V)

## Applications of DFS Algorithm

- **Finding Paths**: To find a path between two nodes in a graph.
- **Testing Bipartiteness**: To test if a graph is bipartite.
- **Finding Strongly Connected Components**: To identify strongly connected components in a graph.
- **Cycle Detection**: To detect cycles within a graph.

---

This README file provides a concise explanation of the Depth First Search algorithm, including its steps, example, pseudocode, complexity, and applications.
