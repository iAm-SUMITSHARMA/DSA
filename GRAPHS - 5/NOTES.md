# GRAPHS - 5

# MODIFIED BFS ⭐⭐⭐⭐⭐

Modified BFS means using the basic BFS idea but changing the way nodes/states are processed according to the problem.

Basic BFS:

```text
Queue
  ↓
Pop current node
  ↓
Process neighbours
  ↓
Push valid neighbours
```

Modified BFS can involve:

- Multiple starting points
- Additional state information
- Different conditions for visiting nodes
- Tracking levels/time/distance
- Processing several nodes simultaneously

---

# MULTI-SOURCE BFS ⭐⭐⭐⭐⭐

In normal BFS, we start from **one source**.

In Multi-Source BFS, we start from **multiple sources simultaneously**.

### Main Idea

```text
Put ALL source nodes into the queue initially
        ↓
Mark all of them visited
        ↓
Perform normal BFS
```

All sources are considered to be at:

```text
Distance / Level = 0
```

Then BFS expands from all sources simultaneously.

### Important Applications

- Rotting Oranges
- 01 Matrix
- Nearest source problems
- Minimum distance from multiple sources
- Spread/contamination problems

### Important Point ⭐⭐⭐⭐⭐

Multi-Source BFS is still:

```text
BFS
+
Multiple initial nodes
```

### Complexity

For a graph:

```text
Time: O(V + E)
Space: O(V)
```

For a grid:

```text
Time: O(rows × cols)
Space: O(rows × cols)
```

---

# DISJOINT SET DATA STRUCTURE ⭐⭐⭐⭐⭐

Also called:

```text
DSU
Disjoint Set Union
Union-Find
```

### Meaning of Disjoint

Disjoint means:

```text
Non-overlapping
```

A Disjoint Set Data Structure maintains multiple **non-overlapping sets/components**.

It efficiently supports two main operations:

```text
1. find(x)
2. union(a, b)
```

---

# FIND OPERATION

```cpp
find(x)
```

Finds the **representative/root** of the set containing `x`.

If:

```text
par[x] == x
```

then `x` is the root.

---

# UNION OPERATION

```cpp
union(a, b)
```

Combines the sets containing:

```text
a
```

and

```text
b
```

Before union:

```text
Set A

Set B
```

After union:

```text
One combined set
```

---

# BASIC DSU STRUCTURE

We maintain:

```cpp
vector<int> par;
```

where:

```text
par[i] = parent of i
```

Initially, every vertex is its own parent:

```text
par[i] = i
```

Therefore, initially:

```text
Every vertex is a separate set.
```

---

# BASIC FIND

```cpp
int find(int x)
{
    if (par[x] == x)
        return x;

    return find(par[x]);
}
```

---

# UNION BY RANK ⭐⭐⭐⭐⭐

Union by Rank is an optimization used to keep the DSU tree **short**.

We maintain:

```cpp
vector<int> rank;
```

Initially:

```text
rank[i] = 0
```

### Rules

If:

```text
rank[A] == rank[B]
```

then:

```text
Make one root the parent of the other
Increase the rank of the new root
```

If:

```text
rank[A] > rank[B]
```

then:

```text
B becomes child of A
Rank does NOT increase
```

If:

```text
rank[B] > rank[A]
```

then:

```text
A becomes child of B
Rank does NOT increase
```

### Important ⭐⭐⭐⭐⭐

> **Rank increases ONLY when both ranks are equal.**

---

# UNION BY SIZE

Instead of maintaining rank, we can maintain the:

```text
Size of each set
```

The smaller tree/set is attached to the larger tree/set.

This is another way to keep the DSU tree short.

```text
Union by Rank
        OR
Union by Size
```

Both are commonly used optimizations.

---

# PATH COMPRESSION ⭐⭐⭐⭐⭐

Path Compression is an optimization technique used in DSU.

Its purpose is to make future `find()` operations faster by making visited nodes point **directly to the root**.

---

# WITHOUT PATH COMPRESSION

Suppose:

```text
4 → 3 → 2 → 1 → 0
```

Calling:

```cpp
find(4);
```

requires:

```text
4 → 3 → 2 → 1 → 0
```

The structure does not change.

A future `find(4)` may again have to traverse the same path.

---

# WITH PATH COMPRESSION

Normal `find()`:

```cpp
int find(int x)
{
    if (par[x] == x)
        return x;

    return find(par[x]);
}
```

With Path Compression:

```cpp
int find(int x)
{
    if (par[x] == x)
        return x;

    return par[x] = find(par[x]);
}
```

The important part:

```cpp
par[x] = find(par[x]);
```

means:

> Find the root and directly connect `x` to that root.

---

# WHY PATH COMPRESSION IS IMPORTANT ⭐⭐⭐⭐⭐

- Prevents long parent chains.
- Flattens the DSU tree.
- Makes future `find()` operations much faster.
- Reduces the effective height of the tree.
- Especially useful when there are many `find()` operations.
- Works together with Union by Rank/Size.

### Easy Way to Remember

> **Path Compression = Find the root → directly connect the node to the root.**

---

# DSU OPTIMIZATIONS ⭐⭐⭐⭐⭐

There are two major optimizations:

### 1. Union by Rank / Size

Keeps the tree:

```text
Short
```

while performing union.

### 2. Path Compression

Makes the tree:

```text
Flat
```

during `find()`.

Together:

```text
Union by Rank/Size
        +
Path Compression
        ↓
Very Efficient DSU
```

---

# DSU TIME COMPLEXITY ⭐⭐⭐⭐⭐

## Without Rank + Without Path Compression

Worst-case tree can become a chain.

```text
find()  → O(V)
union() → O(V)
```

---

## With Union by Rank/Size + Without Path Compression

Tree height is bounded by:

```text
O(log V)
```

Therefore:

```text
find()  → O(log V)
union() → O(log V)
```

---

## With Union by Rank/Size + Path Compression

```text
find()  → O(α(V)) amortized
union() → O(α(V)) amortized
```

where `α(V)` is the **Inverse Ackermann Function**.

For practical input sizes:

```text
α(V) ≈ constant
```

Therefore:

```text
O(α(V)) ≈ O(1) amortized
```

---

# QUICK DSU REVISION ⭐⭐⭐⭐⭐

```text
Without Rank + Without Path Compression
        ↓
O(V)

Without Path Compression + With Rank/Size
        ↓
O(log V)

With Rank/Size + Path Compression
        ↓
O(α(V)) amortized ≈ O(1)
```

Remember:

```cpp
return par[x] = find(par[x]);
```

means:

> **Find the root and directly connect `x` to it.**

---

# KRUSKAL'S ALGORITHM ⭐⭐⭐⭐⭐

Kruskal's Algorithm is a **Greedy Algorithm** used to find a:

```text
Minimum Spanning Tree (MST)
```

It uses:

```text
Sorting
+
Disjoint Set Union (DSU)
```

---

# MAIN IDEA OF KRUSKAL'S

Choose edges in increasing order of weight.

For every edge:

```text
Take the smallest available edge
        ↓
Check whether it creates a cycle
        ↓
If NO → Add edge to MST
If YES → Skip edge
```

Cycle detection is performed using:

```text
DSU
```

---

# KRUSKAL'S ALGORITHM - STEPS ⭐⭐⭐⭐⭐

```text
1. Store all edges.
2. Sort all edges in ascending order of weight.
3. Initialize DSU.
4. Pick the smallest edge.
5. Find the roots of both endpoints.
6. If both endpoints have the same root:
       Skip the edge.
   Otherwise:
       Add the edge to MST.
       Union the two sets.
7. Continue until MST contains V - 1 edges.
```

---

# KRUSKAL'S CYCLE DETECTION ⭐⭐⭐⭐⭐

For an edge:

```text
(u, v, wt)
```

Perform:

```cpp
find(u)
find(v)
```

### If:

```cpp
find(u) == find(v)
```

Then:

```text
u and v already belong to the same component
```

Adding the edge creates a cycle.

Therefore:

```text
Skip the edge.
```

### Otherwise:

```text
find(u) != find(v)
```

Then:

```text
Add edge
union(u, v)
```

---

# WHEN DOES KRUSKAL STOP?

An MST for `V` vertices contains exactly:

```text
V - 1 edges
```

Therefore, Kruskal's algorithm can stop when:

```text
number of selected edges == V - 1
```

---

# KRUSKAL'S COMPLEXITY ⭐⭐⭐⭐⭐

Sorting all edges:

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

including the stored edges.

---

# PRIM'S vs KRUSKAL'S ⭐⭐⭐⭐⭐

| Prim's | Kruskal's |
|---|---|
| Greedy MST algorithm | Greedy MST algorithm |
| Starts from a vertex | Starts from smallest edge |
| Grows one tree | Merges components |
| Uses Min Heap | Uses Sorting |
| Usually uses Adjacency List | Usually uses Edge List |
| Does not require DSU | Uses DSU |
| O(E log V) | O(E log E) |

---

# BFS vs DFS VISITED RULE ⭐⭐⭐⭐⭐

### BFS

Mark a node as visited when it is:

```text
Discovered / Enqueued
```

```text
Discover
   ↓
Mark visited
   ↓
Push into Queue
```

This prevents the same node from being added to the queue multiple times.

---

### DFS

Mark a node as visited when:

```text
Entering the node / Recursive call
```

```text
Enter node
   ↓
Mark visited
   ↓
Explore neighbours
```

---

# IMPORTANT INTERVIEW POINTS ⭐⭐⭐⭐⭐

- DSU is also called **Union-Find**.
- DSU maintains multiple disjoint/non-overlapping sets.
- Main operations are `find()` and `union()`.
- `find(x)` returns the representative/root of `x`.
- `union(a,b)` combines the sets containing `a` and `b`.
- Union by Rank/Size keeps the tree short.
- Path Compression makes the tree flatter.
- Rank increases **only when both ranks are equal**.
- Path Compression is implemented using:

```cpp
par[x] = find(par[x]);
```

- Union by Rank/Size + Path Compression gives `O(α(V))` amortized operations.
- Kruskal's Algorithm uses **Sorting + DSU**.
- Kruskal selects edges in increasing order of weight.
- If both endpoints have the same DSU root, adding the edge creates a cycle.
- Kruskal's MST contains exactly `V - 1` edges.
- Modified BFS is useful for multi-source, level, distance, time, and state-based problems.
- In Multi-Source BFS, all initial source nodes are pushed into the queue before BFS starts.
- BFS → mark visited when **enqueuing**.
- DFS → mark visited when **entering recursion**.