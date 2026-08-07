# IMPORTANT POINTS ⭐⭐⭐⭐⭐

- A graph may have multiple connected components.
- To traverse the entire graph, always iterate over all vertices:
  ```cpp
  for(int i = 0; i < V; i++)
      if(!visited[i])
          dfs(i);
  ```

- Parent technique works only for **Undirected Graphs**.

- Directed Graphs require two arrays:
  - `visited[]`
  - `recPath[]`
- `visited[]` → Node has been visited before.
- `recPath[]` → Node is currently present in the recursion stack.

- Cycle Detection:
  - Undirected → `visited && neighbour != parent`
  - Directed → `visited && recPath`
  
- Bipartite Graph = Two Coloring Problem.
- A graph containing an **Odd Length Cycle** is **NOT Bipartite**.
- Every Tree is Bipartite.
- Connected Components, Cycle Detection, and Bipartite Checking all have:
  - **Time Complexity:** `O(V + E)`
  - **Space Complexity:** `O(V)`

- DFS is generally used for:
  - Cycle Detection
  - Connected Components
  - All Paths
  
- BFS and DFS can both solve:
  - Has Path
  - Connected Components
  - Bipartite Graph