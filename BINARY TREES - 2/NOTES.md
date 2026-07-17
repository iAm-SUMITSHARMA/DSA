# Diameter of a Tree
No. of nodes in the longest path between 2 leaves
==>> Approach 1 - O(n^2)

==>> Approach 2 - O(n)

# Subtree of another Tree
Return true if there is a subtree of root with the same structure and node values of subRoot and false otherwise.

# Map in C++
STL Container

// map(key, value), where key is unique and value can repeat---
map<dataType, dataType> m; // creating a map
m[key] = val; // insert in a map
cout<<m[key]; // access val using key
m.count(key); // 1 if key present, 0 if key not present

// loop on map
for(auto it:m){ // it means iterator can be anything like i, k, mlls ,and others.
    cout<<it.first<<it.second;
}