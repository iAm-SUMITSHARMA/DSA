# MODIFIED BFS


# DISJOINT SET DATA STRUCTURE
Union Find

--->>  disjoint : non-overlapping


### Optimized Implementation

Parent & Rank Concept

union(0,2)
find(2)
union(1,3)
union(2,5)
union(0,3)
find(2)
union(0,4)


# PATH COMPRESSION ⭐⭐⭐⭐⭐

## What is Path Compression?

Path Compression is an optimization technique used in **Disjoint Set Union (DSU)**.

Its purpose is to make future `find()` operations faster by making every visited node point **directly to the root** of its set.

### Without Path Compression

Suppose the parent structure is:

    0
    ↑
    1
    ↑
    2
    ↑
    3
    ↑
    4

Meaning:

```text
4 → 3 → 2 → 1 → 0
```

When we call:

```cpp
find(4);
```

we travel through:

```text
4 → 3 → 2 → 1 → 0
```

But the structure does not change.

If we call `find(4)` again, we have to travel through the same chain again.

---

## With Path Compression

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

The important part is:

```cpp
par[x] = find(par[x]);
```

It means:

> Find the root of `x` and make `x` directly point to that root.

---

## Example

Before path compression:

```text
4 → 3 → 2 → 1 → 0
```

After:

```cpp
find(4);
```

the path becomes flattened:

```text
4 → 0
3 → 0
2 → 0
1 → 0
```

So future operations become much faster.

---

# WHY IS PATH COMPRESSION IMPORTANT? ⭐⭐⭐⭐⭐

- Prevents long parent chains.
- Flattens the DSU tree.
- Makes future `find()` operations much faster.
- Reduces the effective height of the tree.
- Especially useful when there are many `find()` operations.
- Works together with **Union by Rank/Size** to make DSU extremely efficient.

### Easy Way to Remember

> **Path Compression = Find the root → directly connect the node to the root.**

---

# TIME COMPLEXITY

The complexity depends on whether we use **Union by Rank/Size** and **Path Compression**.

## 1. Without Path Compression + Without Union by Rank/Size

The tree can become a chain:

```text
4 → 3 → 2 → 1 → 0
```

Therefore:

```text
find() → O(V) worst case
union() → O(V) worst case
```

---

## 2. Without Path Compression + With Union by Rank/Size

Union by Rank/Size keeps the tree height limited to:

```text
O(log V)
```

Therefore:

```text
find() → O(log V)
union() → O(log V)
```

---

## 3. With Path Compression + Union by Rank/Size ⭐⭐⭐⭐⭐

Both optimizations together make DSU extremely efficient.

```text
find()  → O(α(V)) amortized
union() → O(α(V)) amortized
```

where `α(V)` is the **Inverse Ackermann Function**.

For all practical input sizes:

```text
α(V) ≈ constant
```

So it is commonly considered:

```text
≈ O(1) amortized
```

---

# DSU OPTIMIZATIONS

There are two major optimizations:

### 1. Union by Rank / Size

Keeps the tree **short** while joining two sets.

### 2. Path Compression

Makes the tree **flatter** whenever `find()` is performed.

Together:

```text
Union by Rank/Size
        +
Path Compression
        ↓
Very efficient DSU
```

---

# ⭐ QUICK REVISION

```text
Without Rank + Without Path Compression
        ↓
O(V)

Without Path Compression + With Rank
        ↓
O(log V)

With Rank + Path Compression
        ↓
O(α(V)) amortized ≈ O(1)
```

### Remember:

```cpp
return par[x] = find(par[x]);
```

means:

> **Find the root and directly connect `x` to it.**

# Kruskal's Algorithm
Greedy approach for MST(Minimum Spanning Tree)

--->> Works on disjoint set logic

## STEPS: 
1. sort all the edges in ascending order on the basis of wt.
2. pick smallest wt. which does not form a cycle



*important*
NOTE: One small thing to remember for your notes:

BFS → mark visited when pushing/enqueuing.
DFS → mark visited when entering the recursive function.