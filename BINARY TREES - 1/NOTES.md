# Binary Trees
- Hierachial Data Structure
  While : other data structures like array , vector, stack , queue , linkedlist all come in linear data structure category..

===>> Binary Trees: Each node has at max 2 children.
====>> in Binary Trees:
          TopMost Element -> root
          the line connecting two nodes -> branch/edges
          The node whith zero child -> Leaf nodes
          N's Left node ->N's left child
          N's Right node ->N's right child
          So in this case: N is parent
              and left child & right child are siblings

## Levels & Subtree:
max level = height
node-> depth = current level
-->> There are two subtrees : one left subtree and other one is right subtree

NOTE: Generally in Binary Trees we use Recursion...
ans1 = call(leftSubtree);
ans2 = call(rightSubtree);
after applying some operations---
return operation;

## Tree Traversals
--->> Diferent ways of Tree Traversals: 
1. Preorder (Recursive)
2. Inorder (Recursive)
3. Postorder (Recursive)
4. Level Order Traversals (Iterative)

### *Preorder* Traversal
  -> Root
  -> Left Subtree
  -> Right Subtree

### *Inorder* Traversal
  -> Left Subtree
  -> Root
  -> Right Subtree

### *Postorder* Traversal
  -> Left Subtree
  -> Right Subtree
  -> Root

### *Levelorder* Traversal
  -> Recursion se nahi , iterative se hota hai...
  --> Level Order Traversal is a form of BFS(Breadth First Search).
  --> Also there is DFS(Depth First Search)

# Height of a Tree: 
*Max Distance* from Root to Leaf
---> 1. in terms of:  nodes
---> 2. in terms of: edges, and edges = nodes - 1