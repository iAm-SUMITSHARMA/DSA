// Question 1 : You have a set of integers, which originally contains all the numbers
// from 1 to n. Unfortunately, due to some error, one of the numbers in s got duplicated
// to another number in the set, which results in repetition of one number and loss of
// another number.
// You are given an integer array nums representing the data status of this set after the
// error.
// Find the number that occurs twice and the number that is missing and return them in
// the form of an array. [ Go to Qs ]
// Example :
// Input: nums = [1,2,2,4] Output:
// [2,3]
#include <iostream>
#include <vector>
using namespace std;

vector<int> FindErrorNumber(vector<int> &vec)
{
    int n = vec.size();
    vector<int> count(n + 1, 0);      // n+1 -> size of the vector & 0 -> initial values for each element
    int missing = -1, duplicate = -1; // just used -1 to initialize it...
    for (int num : vec)
    {
        count[num]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (count[i] == 0)
        {
            missing = i;
        }
        else if (count[i] == 2)
        {
            duplicate = i;
        }
    }
    return {duplicate, missing};
}

int main()
{
    vector<int> vec{1, 2, 3, 3, 5, 6, 7};
    // vector<int> vec{1, 2, 2, 4};
    vector<int> result = FindErrorNumber(vec);
    cout << "[" << result[0] << "," << result[1] << "]" << endl;
    return 0;
}
