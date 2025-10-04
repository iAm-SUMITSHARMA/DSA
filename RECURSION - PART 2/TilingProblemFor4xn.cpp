// Qn - Count total ways to tile a floor (4*n) with tiles (2*1)...
#include <iostream>
using namespace std;
int tilingWay(int n) // floor size : 4*n
{
    if (n == 0 || n == 1)
        return 1;
    if (n == 2)
        return 5;
    if (n == 3)
        return 11;
    return tilingWay(n - 1) + 5 * tilingWay(n - 2) + tilingWay(n - 3) - tilingWay(n - 4);
}
int main()
{
    cout << tilingWay(6) << endl;
    cout << tilingWay(5) << endl;
    cout << tilingWay(4) << endl;
    cout << tilingWay(3) << endl;
    cout << tilingWay(2) << endl;
    cout << tilingWay(1) << endl;
    cout << tilingWay(0) << endl;
    // ways   :  1  1  5  11  36  95
    // n      :  0  1  2  3   4   5
    // f(n) = f(n-1) + 5*f(n-2) + f(n-3) - f(n-4)
    return 0;
}