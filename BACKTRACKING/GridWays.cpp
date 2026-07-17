// Qn. Find number of ways to reach from (0,0) to (N-1, M-1) in a NxM Grid.
// Allowed moves - right or down

// TIME COMPLEXITY FOR THIS IS: O(2^(n+m))[Ye Backtracking in Pure recursion ki time complexity hai...]
// But in dynamic programming: it becomes O(nxm)
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int gridWays(int r, int c, int n, int m)
{
    if (r == n - 1 && c == m - 1) // destination
    {
        return 1;
    }
    if (r >=n || c >=m)// out of bounds
    {
        return 0;
    }

    return gridWays(r, c + 1, n, m) + gridWays(r + 1, c, n, m);

    // right
    // int val1 = gridWays(r, c + 1, n, m);
    // down
    // int val2 = gridWays(r + 1, c, n, m);
    // return val1 + val2;
}
int main()
{
    int n = 4, m = 5;
    cout << gridWays(0, 0, n, m);
    return 0;
}
