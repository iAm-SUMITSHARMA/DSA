# GRAPHS
Graphs-> network of nodes

## TYPES of Graphs-->>

### in terms of Edges: 
* Uni-Directional (Directed) , A--> B
* Un-Directed   , A----B
* Bi - Directional, A<=====>

### in terms of Weighted:

* Weighted(dist, price/cost...)
* UnWeighted

NOTE: it's not necessary all nodes are connected in graph.. Their can be some disjoint/ diconnected graphs too

====>> We use list frequently to build a graph

# List in C++ STL
#include<list>

List is generally----
* Doubly Linked List
* push_front(); push_back()
* pop_front(); pop_back()
* front(); back(); size()

#### Storing a Graph

There are many ways to store a graph:
1. *Adjacency List* (Most of the time we use this)
2. *Adjacency Matrix*
3. Edge List
4. 2D Matrix (Implicit Graph)

Note: Graph Structure is not present in c++ stl

## 1. Adjacency List*
--> list of neighbours 


==>> Advantage:
it's -> neighbor optimized
       and space optimized

## 2. Adjacency Matrix*
---> in this we use 2D matrix

==>> Disadvantage/cons:
it's -> not space optimized
        neighbours find function on average takes more time


==>> Advantage:
We can easily find if there is between two nodes or not... example: g[u][v] = 0 -> no edge
                         g[u][v] = 1 -> edge


## 3. Edge List*


## 4. Implicit Graph
---->> 2D matrix


# Graph Traversals

1. Breadh First Search(BFS)
2. Depth First Search(DFS)

## 1. Breadh First Search(BFS)
==> Travel to *immediate Neighbour first*

## 2. Depth First Search(BFS)
==> Keep going to *1st unvisited Neighbour*