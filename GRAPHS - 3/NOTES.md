# GRAPHS - 3

# TOPOLOGICAL SORTING ⭐⭐⭐⭐⭐

Topological Sorting is used for **Directed Acyclic Graphs (DAGs)**.

It gives a **linear ordering of vertices** such that for every directed edge:

```text
u → v
```

`u` comes **before** `v` in the ordering.

### Example

Given:

```text
0 → 1
0 → 2
1 → 3
2 → 3
```

Possible Topological Order:

```text
0 1 2 3
```

Another valid order:

```text
0 2 1 3
```

Both are correct because the required dependencies are satisfied.

---

# IMPORTANT ⭐⭐⭐⭐⭐

Topological Sorting is possible **ONLY for Directed Acyclic Graphs (DAGs)**.

```text
Directed + Acyclic
        ↓
Topological Sort possible
```

If the graph contains a cycle:

```text
0 → 1
↑   ↓
└── 2
```

then no valid Topological Ordering exists.

---

# WHY TOPOLOGICAL SORTING?

Topological Sorting is useful when there are **dependencies**.

Examples:

- Course prerequisites
- Task scheduling
- Build systems
- Package dependencies
- Compilation order
- Job scheduling

Example:

```text
Learn C++
    ↓
Learn DSA
    ↓
Learn Graphs
    ↓
Solve Graph Problems
```

A prerequisite must come before the task depending on it.

---

# IMPORTANT PROPERTY ⭐⭐⭐⭐⭐

For every edge:

```text
u → v
```

Topological ordering must satisfy:

```text
position(u) < position(v)
```

---

# KAHN'S ALGORITHM

Kahn's Algorithm is a method of performing **Topological Sorting using BFS**.

It is based on **Indegree**.

---

# IN-DEGREE AND OUT-DEGREE

## In-degree

Number of edges coming **into** a vertex.

Example:

```text
A → C
B → C
```

```text
indegree(C) = 2
```

---

## Out-degree

Number of edges going **out of** a vertex.

Example:

```text
A → B
A → C
```

```text
outdegree(A) = 2
```

---

# KEY IDEA OF KAHN'S ALGORITHM ⭐⭐⭐⭐⭐

A vertex with:

```text
indegree = 0
```

has **no remaining prerequisites**.

Therefore, it can be placed in the Topological Ordering.

We:

```text
Find all vertices with indegree 0
        ↓
Put them into Queue
        ↓
Remove/process them
        ↓
Reduce indegree of their neighbours
        ↓
If neighbour's indegree becomes 0
        ↓
Push neighbour into Queue
```

---

# KAHN'S ALGORITHM - STEPS

Suppose:

```text
0 → 1
0 → 2
1 → 3
2 → 3
```

### Step 1: Calculate indegree

```text
0 → indegree = 0
1 → indegree = 1
2 → indegree = 1
3 → indegree = 2
```

---

### Step 2: Push all indegree-0 vertices into Queue

```text
Queue:

0
```

---

### Step 3: Pop a vertex

Remove:

```text
0
```

Add it to the Topological Order:

```text
0
```

Now remove its outgoing edges conceptually:

```text
0 → 1
0 → 2
```

So:

```text
indegree(1) = 0
indegree(2) = 0
```

Push them into Queue.

```text
Queue:

1 2
```

---

### Step 4: Continue

Pop `1`:

```text
Topological Order:

0 1
```

Reduce:

```text
indegree(3)
```

from `2` to `1`.

---

Pop `2`:

```text
Topological Order:

0 1 2
```

Reduce:

```text
indegree(3)
```

from `1` to `0`.

Now push `3`.

---

Pop `3`:

```text
Topological Order:

0 1 2 3
```

Done.

---

# KAHN'S ALGORITHM PSEUDOCODE

```text
Calculate indegree of every vertex

Create a queue

For every vertex:
    if indegree[vertex] == 0:
        push vertex into queue

while queue is not empty:

    u = queue.front()
    queue.pop()

    Add u to Topological Order

    For every neighbour v of u:

        indegree[v]--

        if indegree[v] == 0:
            queue.push(v)
```

---

# CYCLE DETECTION USING KAHN'S ALGORITHM ⭐⭐⭐⭐⭐

Kahn's Algorithm can also be used to detect a cycle in a Directed Graph.

### Main Idea

Suppose:

```text
Number of vertices = V
```

After running Kahn's Algorithm:

```text
count = number of vertices processed
```

If:

```text
count == V
```

then:

```text
No Cycle
```

If:

```text
count < V
```

then:

```text
Cycle Exists
```

### Why?

If there is a cycle:

```text
A → B → C
↑       ↓
└───────┘
```

Every vertex inside the cycle has at least one incoming edge.

Therefore, their indegrees can **never become 0**.

They remain unprocessed.

So:

```text
processed vertices < V
        ↓
Cycle exists
```

---

# KAHN'S ALGORITHM FOR CYCLE DETECTION

```text
Calculate indegree
        ↓
Push all indegree-0 vertices
        ↓
Process using BFS
        ↓
Count processed vertices
        ↓
        ┌───────────────┐
        ↓               ↓
    count == V       count < V
        ↓               ↓
   No Cycle          Cycle
```

---

# IMPORTANT FACT ABOUT DAG ⭐⭐⭐⭐⭐

A DAG always has:

```text
At least one vertex with indegree = 0
```

and

```text
At least one vertex with outdegree = 0
```

### Why?

If every vertex had indegree ≥ 1, following incoming edges would eventually create a cycle.

Similarly, if every vertex had outdegree ≥ 1, following outgoing edges would eventually create a cycle.

Therefore, a finite DAG must have:

```text
At least one Source
+
At least one Sink
```

---

# SOURCE AND SINK

### Source

A vertex with:

```text
indegree = 0
```

Example:

```text
A → B
```

`A` is a source.

---

### Sink

A vertex with:

```text
outdegree = 0
```

Example:

```text
A → B
```

`B` is a sink.

---

# TOPOLOGICAL ORDER IS NOT NECESSARILY UNIQUE ⭐⭐⭐⭐⭐

A DAG can have multiple valid Topological Orders.

Example:

```text
0 → 2
1 → 2
```

Possible answers:

```text
0 1 2
```

and

```text
1 0 2
```

Both are valid.

---

# WHEN IS TOPOLOGICAL ORDER UNIQUE?

If at every step of Kahn's Algorithm there is **exactly one vertex with indegree 0**, then the Topological Ordering is unique.

If at any step there are multiple choices with indegree 0, multiple valid orderings may exist.

---

# TOPOLOGICAL SORT USING DFS

Topological Sorting can also be performed using **DFS**.

Basic idea:

```text
DFS(u)

    Visit all neighbours of u

    After all neighbours are processed:
        push u into stack
```

Finally:

```text
Reverse the stack
```

or pop the stack to obtain the Topological Order.

### Why do we push after processing neighbours?

For an edge:

```text
u → v
```

we need:

```text
u before v
```

DFS finishes `v` before `u`, so putting vertices into a stack after DFS and then reversing the order gives the required Topological Ordering.

---

# KAHN'S vs DFS TOPOLOGICAL SORT

| Kahn's Algorithm | DFS |
|---|---|
| Uses BFS | Uses DFS |
| Uses Queue | Uses Stack / Recursion |
| Uses Indegree | Uses visited / recursion state |
| Naturally detects cycle using processed count | Detects cycle using recursion path |
| Time: O(V + E) | Time: O(V + E) |
| Space: O(V) | Space: O(V) |

---

# TIME COMPLEXITY ⭐⭐⭐⭐⭐

Using an **Adjacency List**:

```text
Calculate Indegree → O(V + E)

BFS Processing      → O(V + E)

Total               → O(V + E)
```

Therefore:

```text
Time Complexity: O(V + E)
```

---

# SPACE COMPLEXITY

We use:

- Indegree array → `O(V)`
- Queue → `O(V)`
- Topological order → `O(V)`
- Adjacency List → `O(V + E)`

Therefore, including the graph:

```text
Space Complexity: O(V + E)
```

Auxiliary space excluding the input graph:

```text
O(V)
```

---

# IMPORTANT INTERVIEW POINTS ⭐⭐⭐⭐⭐

- Topological Sorting works only on a **Directed Acyclic Graph (DAG)**.
- For every edge `u → v`, `u` must appear before `v`.
- Kahn's Algorithm uses **BFS + Indegree**.
- Vertices with `indegree = 0` are starting candidates.
- When processing `u`, decrease the indegree of all its neighbours.
- If a neighbour's indegree becomes `0`, push it into the queue.
- A DAG always has at least one **indegree-0 vertex**.
- A DAG always has at least one **outdegree-0 vertex**.
- A vertex with indegree `0` is called a **Source**.
- A vertex with outdegree `0` is called a **Sink**.
- Topological ordering may **not be unique**.
- If Kahn's Algorithm processes fewer than `V` vertices, the graph contains a **cycle**.
- Kahn's Algorithm has `O(V + E)` time complexity using an adjacency list.
- DFS can also be used for Topological Sorting.
- Topological Sorting is heavily used in **dependency and scheduling problems**.

---

# COMMON PROBLEMS ⭐⭐⭐⭐⭐

Important problems to practice:

1. Course Schedule - LeetCode 207
2. Course Schedule II - LeetCode 210
3. Alien Dictionary
4. Parallel Courses
5. Find Eventual Safe States
6. Sequence Reconstruction
7. Minimum Height Trees
8. Sort Items by Groups Respecting Dependencies
9. Course Schedule IV
10. Strange Printer II

> **Practice Tip:** Topological Sorting problems usually involve some form of **dependency**:
>
> `A must happen before B`
>
> Think:
>
> **Directed Graph → Dependency → Topological Sort**