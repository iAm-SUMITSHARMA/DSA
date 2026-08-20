# GRAPHS - 4

# GREEDY ALGORITHMS

A **Greedy Algorithm** makes the locally optimal choice at each step with the goal of obtaining a globally optimal solution.

Important Graph algorithms based on Greedy:

- Dijkstra's Algorithm
- Prim's Algorithm
- Kruskal's Algorithm

> Greedy algorithms do not always guarantee an optimal solution. They work when the problem has the required greedy properties.

---

# DIJKSTRA'S ALGORITHM ⭐⭐⭐⭐⭐

Dijkstra's Algorithm finds the **shortest path from a single source vertex to all other vertices** in a weighted graph.

### Important Points

- Works on **weighted graphs**.
- Works on both **Directed and Undirected graphs**.
- Edge weights must be **non-negative**.
- Uses a **Greedy Approach**.
- Uses **Edge Relaxation**.
- Usually implemented using a **Min Heap / Priority Queue**.
- Finds shortest distances from **one source** to all vertices.

> ❌ Dijkstra does NOT work correctly with negative edge weights.

---

# EDGE RELAXATION ⭐⭐⭐⭐⭐

For an edge:

```text
u → v
weight = wt
```

Relaxation means checking whether going through `u` gives a shorter distance to `v`.

```cpp
if (dist[u] + wt < dist[v])
{
    dist[v] = dist[u] + wt;
}
```

---

# DIJKSTRA'S ALGORITHM - STEPS

```text
1. Initialize dist[] with INF.
2. Set dist[src] = 0.
3. Push (0, src) into Min Heap.
4. Extract the vertex with minimum distance.
5. Relax all outgoing edges of that vertex.
6. If a shorter distance is found:
       update dist[]
       push the new distance into the heap.
7. Repeat until the priority queue is empty.
```

---

# PRIORITY QUEUE IN DIJKSTRA ⭐⭐⭐⭐⭐

Usually store:

```text
(distance, vertex)
```

Example declaration:

```cpp
priority_queue<
    pair<int, int>,
    vector<pair<int, int>>,
    greater<pair<int, int>>
> pq;
```

### C++ Pair Ordering

C++ compares pairs lexicographically:

```text
first value
    ↓
if equal
    ↓
second value
```

Therefore, in:

```cpp
pair<int, int>
```

the `.first` value is considered first.

For Dijkstra:

```text
first  → distance
second → vertex
```

---

# WHY DIJKSTRA IS GREEDY ⭐⭐⭐⭐⭐

At every step, Dijkstra selects the unprocessed vertex with the **smallest currently known distance**.

Because all edge weights are non-negative, once this minimum-distance vertex is selected, its shortest distance cannot be improved later.

This greedy property fails when negative edge weights are present.

---

# DIJKSTRA COMPLEXITY ⭐⭐⭐⭐⭐

Using:

```text
Adjacency List + Min Heap
```

Time:

```text
O((V + E) log V)
```

Commonly simplified to:

```text
O(E log V)
```

Space:

```text
O(V + E)
```

including the graph.

---

# DIJKSTRA vs BFS

### BFS

```text
Shortest Path
+
Unweighted Graph
```

### Dijkstra

```text
Shortest Path
+
Weighted Graph
+
Non-negative weights
```

---

# BELLMAN-FORD ALGORITHM ⭐⭐⭐⭐⭐

Bellman-Ford finds the **shortest path from a single source vertex to all other vertices** in a weighted graph.

### Important Points

- Supports **negative edge weights**.
- Can be used with directed graphs.
- Uses repeated **Edge Relaxation**.
- Can detect **Negative Weight Cycles**.
- Slower than Dijkstra.

---

# BELLMAN-FORD - STEPS

```text
1. Initialize dist[] with INF.
2. Set dist[src] = 0.
3. Relax every edge.
4. Repeat the relaxation process V - 1 times.
5. Perform one additional relaxation pass.
6. If any distance can still be reduced:
       Negative Weight Cycle exists.
```

---

# WHY V - 1 TIMES? ⭐⭐⭐⭐⭐

A simple path containing `V` vertices can contain at most:

```text
V - 1 edges
```

Therefore, shortest-path information can propagate through at most `V - 1` edges.

So Bellman-Ford performs:

```text
V - 1 relaxation rounds
```

---

# NEGATIVE WEIGHT CYCLE ⭐⭐⭐⭐⭐

A negative weight cycle is a cycle whose total edge weight is negative.

If a reachable negative cycle exists, the shortest distance is not finite because the cycle can be traversed repeatedly to keep reducing the total cost.

### Detection

After `V - 1` relaxation rounds:

```text
Perform one additional pass.
```

If any edge can still be relaxed:

```text
Negative Weight Cycle exists.
```

---

# BELLMAN-FORD OPTIMIZATION

If during a complete relaxation round:

```text
No distance is updated
```

then no further improvement is possible.

Therefore, we can stop early.

Worst-case complexity remains unchanged.

---

# BELLMAN-FORD COMPLEXITY ⭐⭐⭐⭐⭐

Time:

```text
O(V × E)
```

Space:

```text
O(V)
```

excluding graph representation.

---

# DIJKSTRA vs BELLMAN-FORD ⭐⭐⭐⭐⭐

| Dijkstra | Bellman-Ford |
|---|---|
| Greedy | Repeated Relaxation |
| Non-negative weights only | Negative weights allowed |
| Cannot detect negative cycles | Can detect negative cycles |
| Faster | Slower |
| Uses Min Heap | Repeatedly processes all edges |
| O(E log V) | O(VE) |

---

# MINIMUM SPANNING TREE (MST) ⭐⭐⭐⭐⭐

A **Minimum Spanning Tree** is a subset of the edges of a:

- Connected
- Undirected
- Weighted graph

that:

1. Contains **all vertices**.
2. Is connected.
3. Contains **no cycle**.
4. Has the **minimum possible total edge weight**.

---

# SPANNING TREE

A Spanning Tree is a subgraph that:

- Contains all vertices.
- Is connected.
- Contains no cycle.

For `V` vertices:

```text
Number of edges = V - 1
```

### Important Properties

- Connected.
- Acyclic.
- Contains exactly `V - 1` edges.
- Removing any edge disconnects the tree.
- Adding any extra edge creates a cycle.

---

# MINIMUM SPANNING TREE

Among all possible spanning trees, the MST has the:

```text
Minimum Total Edge Weight
```

### Important

MST is defined for:

```text
Connected + Undirected + Weighted Graph
```

If the graph is disconnected:

```text
No single MST exists.
```

Instead, we get a:

```text
Minimum Spanning Forest
```

---

# PRIM'S ALGORITHM ⭐⭐⭐⭐⭐

Prim's Algorithm is a **Greedy Algorithm** used to find a Minimum Spanning Tree.

### Main Idea

Start from any vertex and repeatedly choose the:

```text
Minimum-weight edge
```

that connects:

```text
MST → Vertex not yet in MST
```

---

# PRIM'S ALGORITHM - STEPS

```text
1. Choose any starting vertex.
2. Push the starting vertex into a Min Heap with cost 0.
3. Extract the minimum-cost vertex.
4. If the vertex is already in MST, ignore it.
5. Otherwise:
      Add it to MST.
      Add its edge cost to total cost.
6. Add edges connecting it to unvisited vertices.
7. Repeat until all vertices are included.
```

---

# PRIM'S PRIORITY QUEUE ⭐⭐⭐⭐⭐

Usually:

```text
(weight, vertex)
```

If we also need to store the parent:

```text
(weight, vertex, parent)
```

The parent is required when we want to store/print the actual MST edges.

### Initial Entry

```cpp
pq.push({0, src});
```

means:

```text
weight = 0
vertex = src
```

It does **not** represent a coordinate.

The starting vertex is added with cost `0` because no edge is required to select the starting vertex.

---

# PRIM'S COMPLEXITY ⭐⭐⭐⭐⭐

Using:

```text
Adjacency List + Min Heap
```

Time:

```text
O(E log V)
```

Space:

```text
O(V + E)
```

---

# KRUSKAL'S ALGORITHM ⭐⭐⭐⭐⭐

Kruskal's Algorithm is another **Greedy Algorithm** used to find a Minimum Spanning Tree.

### Main Idea

Instead of growing the MST from a starting vertex, Kruskal's:

```text
Sorts all edges by weight
```

and then repeatedly chooses the smallest edge that does not create a cycle.

---

# KRUSKAL'S ALGORITHM - STEPS

```text
1. Store all edges.
2. Sort edges in increasing order of weight.
3. Initialize DSU.
4. Take the smallest edge.
5. Check whether adding it creates a cycle.
6. If it does not create a cycle:
      Add the edge to MST.
      Union its two vertices.
7. If it creates a cycle:
      Skip the edge.
8. Continue until MST contains V - 1 edges.
```

---

# KRUSKAL + DSU ⭐⭐⭐⭐⭐

For an edge:

```text
u → v
```

Check:

```cpp
find(u) == find(v)
```

If:

```text
find(u) == find(v)
```

then both vertices already belong to the same component.

Adding the edge would create a cycle.

Therefore:

```text
Skip the edge.
```

Otherwise:

```text
union(u, v)
Add edge to MST.
```

---

# KRUSKAL'S COMPLEXITY ⭐⭐⭐⭐⭐

Sorting:

```text
O(E log E)
```

DSU operations:

```text
O(E α(V))
```

Overall:

```text
O(E log E)
```

Space:

```text
O(V + E)
```

---

# PRIM'S vs KRUSKAL'S ⭐⭐⭐⭐⭐

| Prim's | Kruskal's |
|---|---|
| Starts from a vertex | Starts from smallest edge |
| Grows one MST | Builds components and merges them |
| Uses Min Heap | Uses Sorting |
| Usually uses Adjacency List | Usually uses Edge List |
| Does not require DSU | Uses DSU |
| O(E log V) | O(E log E) |
| Greedy | Greedy |

---

# PRIM'S vs DIJKSTRA ⭐⭐⭐⭐⭐

Both may use a Min Heap, but their goals are different.

### Prim's

```text
Goal → Minimum Spanning Tree
Priority → Minimum Edge Weight
```

It minimizes:

```text
Total weight of the MST
```

### Dijkstra

```text
Goal → Shortest Path
Priority → Minimum Distance from Source
```

It minimizes:

```text
Distance from source
```

### Easy Memory Trick

```text
PRIM
↓
MST
↓
Cheapest EDGE
```

```text
DIJKSTRA
↓
Shortest Path
↓
Cheapest DISTANCE
```

---

# IMPORTANT ALGORITHM COMPARISON ⭐⭐⭐⭐⭐

| Algorithm | Purpose | Negative Weights | Main Technique |
|---|---|---|---|
| BFS | Shortest path in unweighted graph | N/A | Queue |
| Dijkstra | Shortest path from source | ❌ | Greedy + Min Heap |
| Bellman-Ford | Shortest path from source | ✅ | Repeated Relaxation |
| Prim's | Minimum Spanning Tree | ✅ | Greedy + Min Heap |
| Kruskal's | Minimum Spanning Tree | ✅ | Greedy + Sorting + DSU |

---

# ⭐⭐⭐⭐⭐ QUICK REVISION

```text
SHORTEST PATH
│
├── Unweighted Graph
│       ↓
│      BFS
│
├── Weighted + Non-negative
│       ↓
│    Dijkstra
│
└── Weighted + Negative
        ↓
   Bellman-Ford
        ↓
   Negative Cycle Detection
```

```text
MINIMUM SPANNING TREE
│
├── Prim's
│     ↓
│  Min Heap
│  Grows from a vertex
│
└── Kruskal's
      ↓
   Sort Edges
      +
      DSU
```

---

# IMPORTANT INTERVIEW POINTS ⭐⭐⭐⭐⭐

### Dijkstra

- Single-source shortest path.
- Works with non-negative edge weights.
- Uses edge relaxation.
- Uses a Min Heap.
- Greedy algorithm.
- Time: `O(E log V)`.
- Does not work with negative edge weights.

### Bellman-Ford

- Single-source shortest path.
- Supports negative edge weights.
- Relaxes all edges `V - 1` times.
- Extra pass detects negative weight cycles.
- Time: `O(VE)`.

### MST

- Connected, undirected, weighted graph.
- Contains all vertices.
- Contains exactly `V - 1` edges.
- Contains no cycle.
- Minimum total edge weight.
- Disconnected graph → Minimum Spanning Forest.

### Prim's

- Greedy MST algorithm.
- Starts from any vertex.
- Selects cheapest edge connecting MST to an unvisited vertex.
- Uses Min Heap.
- Time: `O(E log V)`.

### Kruskal's

- Greedy MST algorithm.
- Sorts edges by weight.
- Adds an edge only if it doesn't create a cycle.
- Uses DSU.
- Stops after `V - 1` edges.
- Time: `O(E log E)`.