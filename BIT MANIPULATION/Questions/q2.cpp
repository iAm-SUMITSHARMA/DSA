// Question 2 : Given a non-empty array of integers nums, every element appears twice
// except for one. Find that single one.
// You must implement a solution with a linear runtime complexity and use only
// constant extra space. [ Go to Qs ]
// Hint - Think XOR.

#include <iostream>
#include <vector>
using namespace std;
int FindSingleAppearedElement(vector<int> num)
{
    int singleAppearedElement = 0;
    for (int val : num)
    {
        singleAppearedElement ^= val;
    }
    return singleAppearedElement;
}
int main()
{
    vector<int> num = {1, 2, 1, 2, 3, 4, 5, 4, 3, 6, 6};
    cout << FindSingleAppearedElement(num) << endl;
    return 0;
}

// ## Concept:
// ✅ What the question wants:
// - Use XOR cleverly:
// - XOR of a number with itself is 0
// - XOR of a number with 0 is the number itself
// - XOR is commutative and associative, so:

// a ^ a ^ b ^ b ^ c = c
// - if c is the unique number and all others appear twice.
