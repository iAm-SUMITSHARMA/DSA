// Question- MINIMUM ABSOLUTE DIFFERENCE PAIRS
// Pair elements of A& B to *minimize sum of absolute differences between pairs*
// A[n] = {1,2,3}
// B[n] = {2,1,3}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(pair<double, int> p1, pair<double, int> p2)
{
    return p1.first > p2.first; // descending order based on ratio
}
int minAbsoluteDiffPairs(vector<int> A, vector<int> B)
{
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    int n = A.size();
    int absoluteDifference = 0;
    for (int i = 0; i < n; i++)
    {
        // int diff = A[i] - B[i];
        // if (diff >= 0)
        //     absoluteDifference += diff;
        // else
        //     absoluteDifference -= diff;
        absoluteDifference += abs(A[i] -B[i]);
    };
    return absoluteDifference;
}
int main()
{
    vector<int> A = {4,1,8,7};
    vector<int> B = {2, 3,6,5};
    cout<<minAbsoluteDiffPairs(A, B);
}