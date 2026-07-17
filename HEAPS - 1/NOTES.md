# Heaps / Priority Queue
---> Priority Queue is the part of STL in c++ which is built on the top of the heaps structure.

## PQ in STL

 #include<queue>
priority_queue<int> pq;
* push() // O(logn)
* pop() // O(logn)
* top() // O(1)

--->> PQ  is built on the top of heaps.. 
--->> and heaps can be of two types:
     1. max heap -> largest element priority
     2. min heap -> smallest element priority


# HEAPS-
What is the Heap Data Structure?

-->> when we visualize heap: 
               we visualize it as complete Binary tree(CBT)
--->> And in code we write it as vector or array. 

Note: By default in c++ : max heap is created..

# Heaps
Heap is a *Complete BT(CBT)*
* CBT is a BT where all levels are filled except may be the last one, which is filled from *left to right*.
* Parent>= Children // Max heap
* Parent <= Children // Min heap

## Building the Heaps Data Structure
* push() // insert -> O(logn)
* pop() // pop max or min -> O(logn)
* top() // get max or min -> O(1)

===>> HEAP IS *not* IMPLEMENTED AS A CLASS:
===>> We implement Heap as an *array/vector* :

Note: index i (parent)
      left Child = 2*i + 1
      right Child = 2*i + 2

      if( child index = x)
      parent index = (x-1)/2


## HEAPIFY:
--> O(logn)
--->> For pop we use heapify function


# Quick Notes for pairs
priority_queue<
    pair<int, vector<int>>,
    vector<pair<int, vector<int>>>,
    greater<pair<int, vector<int>>>
> pq;

# Geneal Syntax --> remember it
priority_queue<
    DataType,
    ContainerType,
    Comparator
> pq;

# Quick Notes for INTEGERS:
priority_queue<
    int,
    vector<int>,
    greater<int>
> pq;