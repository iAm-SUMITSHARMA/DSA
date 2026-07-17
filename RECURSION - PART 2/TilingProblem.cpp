// Qn - Count total ways to tile a floor (2*n) with tiles (2*1)...
// #include <iostream>
// using namespace std;
// int tilingWay(int n) // floor size : 2*n
// {
//     if (n == 0 || n == 1) // base case
//     {
//         return 1;
//     }
//     // vertical : tilingWay(n - 1);
//     // horizontal : tilingWay(n - 2);
//     return tilingWay(n - 1) + tilingWay(n - 2);
// }
// int main()
// {
//     cout << tilingWay(5) << endl; // 1  2  3  5  8
//     return 0;
// }

// Qn - Count total ways to tile a floor (2*n) with tiles (2*1)...

#include <iostream>
using namespace std;
int totalWay(int n)
{
    if (n == 0 | n == 1)
        return 1;
    return totalWay(n - 1) + totalWay(n - 2);
}
int main()
{
    cout << totalWay(4) << endl;
}