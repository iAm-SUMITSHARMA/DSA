// Question 3 : You are given a 0-indexed integer array nums.
// The effective value of three indices i, j, and k is defined as ((nums[i] | nums[j]) &
// nums[k]).
// The xor-beauty of the array is the XORing of the effective values of all the possible triplets
// of indices (i, j, k) where 0 <= i, j, k < n.
// Return the xor-beauty of nums. [ Go to Qs ]

#include <iostream>
#include <vector>
using namespace std;
int xorBeauty(vector<int> num)
{
    int result = 0;
    for (int n : num)
    {
        result ^= n;
    }
    return result;
}
int main()
{
    vector<int> num = {1, 2, 3};
    cout << xorBeauty(num) << endl;
    return 0;
}

// cLEARING CONCEPTS:::::::::
// 1. What the problem says

// You’re supposed to do:

// for (i)
//   for (j)
//     for (k)
//       result ^= ((nums[i] | nums[j]) & nums[k]);
// This looks like it should be O(n³) operations.

// 2. What actually happens

// Because XOR only cares about whether a bit appears an odd or even number of times, a lot of those values cancel out.

// Every bit in the answer just depends on how many times that bit shows up across all triplets.
// After counting, you find out that:

// The bit from nums[i] contributes an odd number of times exactly once for each element.

// All the other “cross terms” happen an even number of times and cancel to zero under XOR.

// So at the end you’re left with just:

// nums[0] ^ nums[1] ^ ... ^ nums[n-1]


// That’s why your short loop works.

// 3. Small example

// Take nums = [1, 2].

// Full triple loop:

// (i,j,k) = (0,0,0): (1|1)&1 = 1
// (0,0,1): (1|1)&2 = 0
// (0,1,0): (1|2)&1 = 1
// (0,1,1): (1|2)&2 = 2
// (1,0,0): (2|1)&1 = 1
// (1,0,1): (2|1)&2 = 2
// (1,1,0): (2|2)&1 = 0
// (1,1,1): (2|2)&2 = 2
// XOR them all: 1^0^1^2^1^2^0^2 = 1^1^1^2^2^2 = 1^2 = 3


// Simple loop: 1 ^ 2 = 3

// Same answer.

// 4. In one sentence

// Because every bit from the OR/AND expression appears an even number of times except the ones directly in nums, the giant triple loop boils down to simply XORing all the numbers.