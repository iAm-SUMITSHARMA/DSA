# TOPOLOGICAL SORTING: 
used for *Directed Acyclic Graphs (DAG)*

--->> Topological Sorting give : Linear order of vertices such that for every u->v , u comes before v in sequence.

# NECESSARY: 
WE HAVE TO SOLVE QUESTIONS ON TOPOLGICAL SORTING.. THERE ARE 32 QUESTIONS ON TOPOLOGICAL SORTING...

# KAHN'S ALGO:

## TOPOLOGICAL SORTING 
using BFS (*Kahn's Algorithm*)
works on two logic: 
In degree: incoming edges count
Out degree: outgoing edges count

--->> a DAG has atleast one vertex with *in-degree 0* and atleast one vertex with *out-degree 0*


## Kahn's Algo for Cycles: 
If, after processing all nodes, some nodes still have *non-zero indegree* , it indicates the presence of a cycle.