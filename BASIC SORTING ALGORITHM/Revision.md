# Sorting Algorithms README

This document explains the step-by-step logic behind four common sorting algorithms: Bubble Sort, Insertion Sort, Selection Sort, and Counting Sort.

# 🔵 1. Bubble Sort

Logic (Step-by-Step):

Bubble sort works by repeatedly swapping neighboring elements if they are in the wrong order.

After each full pass, the largest remaining element moves to the correct position at the end.

Example:
Array = [5, 3, 4, 1, 2]

Pass 1: Compare (5,3) → swap → [3,5,4,1,2]
Compare (5,4) → swap → [3,4,5,1,2]
Compare (5,1) → swap → [3,4,1,5,2]
Compare (5,2) → swap → [3,4,1,2,5] ✅ largest (5) is at end

Pass 2: Repeat for first 4 elements → [3,1,2,4,5]

Continue until array becomes [1,2,3,4,5].

Key idea: Keep swapping neighbors until no swaps are needed.

# 🟢 2. Insertion Sort

Logic (Step-by-Step):

Insertion sort builds the sorted part of the array one element at a time.

It takes the current element and inserts it into the correct position within the already-sorted portion on the left.

Example:
Array = [5, 3, 4, 1, 2]

Start with first element (5) → already "sorted."

Take 3 → insert before 5 → [3,5,4,1,2]

Take 4 → insert between 3 and 5 → [3,4,5,1,2]

Take 1 → insert at front → [1,3,4,5,2]

Take 2 → insert between 1 and 3 → [1,2,3,4,5].

Key idea: Think of sorting cards in your hand, one card at a time.

# 🟡 3. Selection Sort

Logic (Step-by-Step):

Selection sort repeatedly finds the smallest element from the unsorted portion and puts it in the correct position in the sorted portion.

Example:
Array = [5, 3, 4, 1, 2]

Find smallest (1), swap with first → [1,3,4,5,2]

Find next smallest (2), swap with second → [1,2,4,5,3]

Find next smallest (3), swap with third → [1,2,3,5,4]

Find next smallest (4), swap with fourth → [1,2,3,4,5].

Key idea: Each pass picks the next smallest element and locks it in place.

# 🔴 4. Counting Sort

Logic (Step-by-Step):

Counting sort doesn’t compare elements. Instead, it counts occurrences of each value and uses that information to build the sorted array.

Example:
Array = [4, 2, 2, 8, 3, 3, 1]

Step 1: Find max value = 8.

Step 2: Create count array of size 9 → [0,0,0,0,0,0,0,0,0]

Step 3: Count frequencies → [0,1,2,1,1,0,0,0,1]
(means: one 1, two 2’s, one 3, one 4, one 8).

Step 4: Cumulative count → [0,1,3,4,5,5,5,5,6]
(tells where each number should go).

Step 5: Place elements in output array → [1,2,2,3,3,4,8].

Key idea: Count how many of each element exist, then place them in order.

# ⚡ Summary of Core Ideas

Bubble Sort: Repeatedly swap neighbors until sorted.

Insertion Sort: Insert each element into the sorted portion.

Selection Sort: Repeatedly pick the smallest remaining element.

Counting Sort: Count occurrences → place elements directly.