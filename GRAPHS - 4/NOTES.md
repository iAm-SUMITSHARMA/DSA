(Greedy Algorithm)
# Dijkstra's Algorithm
*Shortest path* from src to all vertices for weighted graph.

-->> used in weighted graph
-->> graph can be directed or undirected
-->> graph's weight cannot be negative.. it should be non-negative(positive).


-->> Dijkstra's Algorithm works on *Edge Relaxation*.

** TC : O((V+E)logV) in simple words : O(nlogn)

*IMPORTANT------->>>*
NOTE: // NOTE : BY DEFAULT C++ STL SORT ON THE BASIS OF PAIR'S FIRST VALUE

----------------------------------

(DP Algorithm)
# Bellman Ford Algorithm
*Shortest path* from src to all vertices for weighted graph with *negative wt*.


## STEPS: 
Perform this operation *V-1* times

for all edges(u,v)
// edge relaxations
if(dist[u] + wt(u,v) < dist[v]) 
     dist[v] = dist[u] + wt(u,v)

** TC : O(E.V) in simple words : O(n^2)


### Why V-1?
longest path without a cycle ---> V-1 edges


NOTE: BF doesn't work for *Negative Weight Cycles* ---- *(cycles with overall negative weight)*.


# Minimum Spanning Tree(MST)
MST is a subset of the edges of a *connected, edge-weighted undirected graph* that connects all the vertices together, without any cycles and with the *minimum possible total edge weight*.


===>> Before Minimum Spanning Tree know Spanning Tree: 
for any graph a spanning tree is a subset of graph(subgraph) containing all nodes with minimum edges without any cycle.

## Prim's Algorithm
MST Set