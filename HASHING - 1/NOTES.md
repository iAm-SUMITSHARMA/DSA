# HASHING
---> Hash Table is data structure of hashing..
Hash Table--:
           1. unordered_map
           2. unordered_set

# HASH TABLE===>>>
Unordered Data Structure(key, value)
*Insert* Operation //O(1) avg case , O(n) worst case
*Search* Operation //O(1) avg case
*Remove* Operation //O(1) avg case


===> To create hash table, we need hashing(hash function); 

## Hashing (Hash Function)
-> Hashing means converting one data type to another

# STL CONTAINERS

1. * Unordered Maps       * Maps
i. HashTable(DS)          i. Red Black Trees
ii. Insert--|             ii. Insert-|   
    Search---> avg:O(1)     Search-->O(logn)
    Erase--|   worst:O(n)     Erase-|
iii. unordered->no order  iii. ordered data


NOTE: Red Black Trees are  
2. * Unordered Sets    * Sets



## 1. UNORDERED MAPS:

unordered_map<key, val>m;
m[key] =val;
cout<<m[key];
m.count(key); // 1 if key present, 0 if key not present
m.erase(key);


## 2. SETS: 
in maths- Sets : unique elements..
--->> in c++: we can sets store just keys... and all keys are unique..


-->> SETS USE RED BLACK TREE: TC: O(logn)
##  UNORDERED SETS:

unordered_set<key>s;
s.insert(key)
s.find(key)
s.erase(key)

-->> Unordered sets internally use hash table -> O(1) but in worst case case O(n)


## NORMAL SETS:
---->> TC: O(logn)
---->> ORDERED MAINTAIN
set<key>s;
s.insert(key)
s.find(key)
s.erase(key)