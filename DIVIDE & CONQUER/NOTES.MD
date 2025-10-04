selection sort----\
insertion sort---- \
----------------------> o(n^2)
bubble sort------- /
count sort--------/

inbuilt sort-----> O(nlogn)

MERGE SORT--------> O(nlogn)
----------------------------------------
#  Merge Sort=>
Approach:
1. Divide-> mid = (st + end)/2

2. Recursive Call->
mergeSort(left) & 
mergeSort(right) 

3. merge()

4. Copy vector to original array...

->> TIME COMPLEXY IN MERGE SORT = O(nlogn)
->> SPACE COMPLEXY IN MERGE SORT = O(n) - with extra space : vector<int>temp

# Quick Sort=>
->> TIME COMPLEXY IN MERGE SORT => in avg. cases= O(nlogn) &&& in worst cases = O(n^2)
->> SPACE COMPLEXY IN MERGE SORT = O(1) - without any extra space...

--> WORKS ON *PIVOT* & *PARTITION* Approach===>>>

===> PIVOT: special idx

NOTE : IN QUICK SORT ---> We will always try to choose ending index as our pivot...

=> STEPS: 
1. pivot

2. partition

3. Recursive call---
   QuickSort(left)
   QuickSort(right)

## WORST CASE OF Quick Sort: 
Worst Case: Time complexity = O(n^2)

--> *This complexity occurs when repeatedly the smallest or the largest element of the array becomes the pivot.

Example: Either our array is in ascending order or  order..
1. {1,2,3,4,5} -> ascending order
2. {5,4,3,2,1} -> descending order


# Search in Rotated Sorted=>

### Modified Binary Search Approach:
--> Time Complexity = O(logn)


# 4. Maximum Subarray (Kadane’s via Divide and Conquer)
- Goal: Find subarray with max sum
- Time Complexity: O(n log n)


# 5. Search in Rotated Sorted Array
- Goal: Find target in rotated sorted array
- Time Complexity: O(log n)
