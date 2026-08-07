# GRAPHS

A **Graph** is a **non-linear data structure** consisting of:

- Vertices (Nodes)
- Edges (Connections between vertices)

> **Graph = (Vertices + Edges)**

### Real-Life Examples
- Google Maps
- Facebook Friends
- Instagram Followers
- Computer Networks
- Flight Routes

---

# TYPES OF GRAPHS

## 1. Based on Direction of Edges

### Directed Graph

```
A → B
```

- Edge has direction.
- Traversal is possible only in the arrow's direction.

---

### Undirected Graph

```
A —— B
```

- No direction.
- Traversal is possible in both directions.

---

### Bidirectional Graph

```
A ⇄ B
```

Equivalent to

```
A → B
B → A
```

> A bidirectional graph is simply a directed graph having edges in both directions.

---

## 2. Based on Weights

### Weighted Graph

Each edge stores some value such as:

- Distance
- Cost
- Time
- Price

Example

```
A --5--> B
```

---

### Unweighted Graph

All edges have equal weight.

```
A —— B
```

---

## 3. Based on Connectivity

### Connected Graph

Every vertex is reachable from every other vertex.

---

### Disconnected Graph

Some vertices/components are isolated.

Example

```
0 —— 1

2 —— 3
```

--->> There are **2 connected components**.

> ⭐ Important:
> A graph **does not have to be connected**.

---

## 4. Based on Cycles

### Cyclic Graph

Contains at least one cycle.

---

### Acyclic Graph

Contains no cycle.

Example:
Tree

---

## Directed Acyclic Graph (DAG)

A graph which is:

- Directed
- Acyclic (No Cycle)

Very Important Topics based on DAG:

- Topological Sort
- Course Schedule
- Dependency Resolution

---

# DEGREE OF A VERTEX

## Undirected Graph

Degree = Number of connected edges.

Example

```
A —— B —— C
```

Degree(B) = 2

---

## Directed Graph

### In-degree

Number of incoming edges.

### Out-degree

Number of outgoing edges.

---

# GRAPH REPRESENTATION

There are many ways to store a graph:

1. Adjacency List ⭐⭐⭐⭐⭐
2. Adjacency Matrix
3. Edge List
4. Implicit Graph (2D Matrix)

> **Note:** Graph data structure is **not available in C++ STL**.

---

# LIST IN C++ STL

```cpp
#include <list>
```

`list` in C++ is generally implemented as a **Doubly Linked List**.

Common Functions:

```cpp
push_front()
push_back()

pop_front()
pop_back()

front()
back()

size()
```

---

# 1. ADJACENCY LIST ⭐⭐⭐⭐⭐

Stores the list of neighbours for every vertex.

Example

```
0 → 1 2
1 → 0 3
2 → 0
3 → 1
```

Usually implemented using

```cpp
vector<vector<int>>

or

list<int>*
```

## Advantages

- Space Optimized

```
O(V + E)
```

- Neighbour Traversal is Efficient

```
O(Degree of Vertex)
```

- Most commonly used representation in interviews.

---

# 2. ADJACENCY MATRIX

Uses a 2D matrix.

Example

```
    0 1 2

0   0 1 1
1   1 0 0
2   1 0 0
```

## Advantages

Finding whether an edge exists:

```cpp
graph[u][v]
```

Time Complexity:

```
O(1)
```

---

## Disadvantages

Space Complexity:

```
O(V²)
```

Neighbour Traversal:

```
O(V)
```

Not suitable for sparse graphs.

---

# 3. EDGE LIST

Stores only edges.

Example

```
0 1
0 2
1 3
```

Useful in:

- Kruskal's Algorithm
- Bellman Ford Algorithm

---

# 4. IMPLICIT GRAPH

Graph is not explicitly stored.

Generally represented using a 2D Grid.

Examples:

- Number of Islands
- Flood Fill
- Rotting Oranges
- Shortest Path in Binary Matrix

Neighbours are generated during traversal.

---

# GRAPH TRAVERSALS

There are two major traversals:

1. Breadth First Search (BFS)
2. Depth First Search (DFS)

---

# BREADTH FIRST SEARCH (BFS)

Uses:

```
Queue
```

Traversal:

- Visits immediate neighbours first.
- Level-by-Level Traversal.

Applications:

- Shortest Path (Unweighted Graph)
- Connected Components
- Bipartite Graph
- Flood Fill
- Level Order Traversal

Complexity:

```
Time  : O(V + E)
Space : O(V)
```

---

# DEPTH FIRST SEARCH (DFS)

Uses:

- Recursion
- Stack

Traversal:

- Go as deep as possible.
- Backtrack.
- Visit next branch.

Applications:

- Cycle Detection
- Topological Sort
- Connected Components
- Bridges
- Articulation Points

Complexity:

```
Time  : O(V + E)
Space : O(V)
```

---

# BFS vs DFS

| BFS | DFS |
|------|------|
| Queue | Stack / Recursion |
| Level-wise Traversal | Depth-wise Traversal |
| Shortest Path (Unweighted) | No Shortest Path Guarantee |
| More Memory | Usually Less Memory |
| Visits Neighbours First | Goes Deep First |

---

# HAS PATH PROBLEM

Question:

Given:

- Source
- Destination

Determine whether a path exists.

Can be solved using:

- BFS
- DFS

Complexity:

```
Time : O(V + E)
```

---

# IMPORTANT INTERVIEW POINTS ⭐⭐⭐⭐⭐

- Graph = Vertices + Edges.
- Tree is a special type of Graph.
- A graph may be disconnected.
- Always maintain a **visited[]** array while performing BFS/DFS.
- BFS uses a **Queue**.
- DFS uses **Recursion or Stack**.
- Adjacency List is the most commonly used graph representation.
- BFS gives the shortest path only in an **Unweighted Graph**.
- DFS **does not** guarantee the shortest path.
- Time Complexity of BFS/DFS using Adjacency List is **O(V + E)**.
- Adjacency Matrix requires **O(V²)** space.
- Edge List is mainly used in algorithms like **Kruskal** and **Bellman-Ford**.
- Grid problems are examples of **Implicit Graphs**.
- DAG (Directed Acyclic Graph) is the foundation of **Topological Sort** and **Course Schedule** problems.