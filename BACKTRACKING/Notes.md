# BackTracking: 

## Types of backtracking:

1. Decision: yes/no
2. Optimization: Best/one
3. Enumeration: const - total no./ sum

NOTE: in Subsets : order not matter............

## tOTAL NO. OF SUBSETS OF A SET(CAN BE ARRAY, STRING , VECTOR , many more) : equal to 2^n

# pERMUTATION: rearrangement of element
## total number of permutations of n elements = n!

## timecomplexity in permutation = O(n!)
But in worst  case: O(n)

# GRID WAYS:

TIME COMPLEXITY FOR THIS IS: O(2^(n+m))[Ye Backtracking in Pure recursion ki time complexity hai...]
But in dynamic programming: it becomes O(nxm)
 
## Optimizaton for Linear TC=>
in mathematics: total number of ways = (x+y)!/(x!*y!)
So, similarly: x = n-1 for rows and y = m-1 for columns.
So our final formula for calculating Grid ways : (n-1 + m-1)!/(n-1)!*(m-1)!

----------------------------------------

### By CHATGPT 5.2: 

----------------------------------------

# Backtracking

Backtracking is a problem-solving technique where we build solutions step by step and remove (backtrack) those solutions that fail to satisfy the constraints of the problem.

It is generally implemented using recursion.

## Types of Backtracking Problems
### 1. Decision Problems

Question format: Yes / No

Objective: Check whether a solution exists or not.

Examples:

Is there a subset with sum = X?

Can we reach the destination?

Is there a valid path?

### 2. Optimization Problems

Objective: Find the best solution among all possible solutions.

Could be:

Minimum cost

Maximum profit

Shortest path

Examples:

N-Queens (placing queens optimally)

Minimum distance path

Knapsack (maximize value)

### 3. Enumeration Problems

Objective: Count or list all possible solutions

Often used to:

Count total ways

Print all combinations

Examples:

Total number of subsets

Print all permutations

Total paths in a grid

### Subsets

A subset is a selection of elements where order does NOT matter

Example:

For array [1, 2]

Subsets: {}, {1}, {2}, {1,2}

## Important Rule

Order does NOT matter in subsets

## Total Number of Subsets

For a set (array, string, vector, etc.) of size n:

    Total subsets = 2^n

### Reason:
Each element has 2 choices → include or exclude.

## Time Complexity (Subsets)

    Total subsets: 2^n

    Each subset takes up to O(n) to process
    👉 Overall: O(n · 2^n)

# Permutations

Permutation means rearrangement of elements

Order matters

Example

For [1,2,3]:

123, 132, 213, 231, 312, 321

## Total Number of Permutations

For n distinct elements:

    Total permutations = n!

## Time Complexity (Permutations)

    Total permutations: n!

    Each permutation takes O(n) to generate or print

👉 Overall Time Complexity: O(n · n!)

->>> Worst Case Space Complexity: O(n) (recursion stack)


---->>> NOTE: substr(start, length)
# Grid Ways Problem
Problem Statement

Count the total number of ways to move from the top-left corner (0,0) to the bottom-right corner (n-1, m-1) in a grid.

--->>  Allowed Moves

Right

Down

## Recursive / Backtracking Solution

Each cell gives 2 choices: Right or Down

Time Complexity (Pure Recursion / Backtracking)

    O(2^(n+m))

    ====>>This is exponential because we explore all possible paths.

## Dynamic Programming Optimization

### Using DP (memoization or tabulation):

      Time Complexity = 𝑂(𝑛×𝑚)

### Mathematical Optimization (Best Approach)
Observation

To reach (n-1, m-1):

Right moves = m - 1

Down moves = n - 1

Total moves = (n - 1) + (m - 1)

#### Formula (Combination)

Total Grid Ways=

        (n−1+m−1)! / [(n−1)!×(m−1)!]
	​
This gives linear-time calculation using mathematics.


 --------------------------------- 
 **IMPORTANT**
 ## WHEN TO USE BACKTRACKING:
 ---------------------------------

When the problem asks for:

1. All possibilities

2. Valid configurations

3. Paths, subsets, permutations

4. When constraints must be checked at each step

## Key Takeaways

Backtracking = recursion + undo

Subsets → order does NOT matter

Permutations → order matters

Subsets count → 2^n

Permutations count → n!

Grid Ways:

Recursive: exponential

DP: O(n*m)

Math: combination formula (best)