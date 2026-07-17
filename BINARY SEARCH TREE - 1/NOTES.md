# Binary Search Trees
Special Binary Tree

===>> BT : search TC: O(n)
===>> BST : search TC: O(logn)
===>> and we know O(logn)<<<<< O(n)

NOTE: BST PROPERTIES: 
       leftSubtree value < node value
       rightSubtree value > node value

Generally in BST all nodes are unique

## Special Property
-->> Inorder Traversal of BST gives a sorted sequence

## Delete a Node
--->> 3 Cases for a node to delete: 
* No child(leaf node)
* 1 child
* 2 child

### Case3: node with 2 children
Steps: 1. replcae val with inorder successor
       2. delete inorder successor
       NOTE: successor mtlb jo hamare baad aata hai , aur predecessor kaa mtlb jo hamare pahale aata hai..

### Inorder Successor
In BST it is left-most node in right subtree of a node.
(This Inorder Successor always has 0 or 1 left child)