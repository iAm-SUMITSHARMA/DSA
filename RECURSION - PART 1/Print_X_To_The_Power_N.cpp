#include <iostream>
#include <vector>
using namespace std;
// int printXn(int x, int n) // TIME COMPLEXITY = O(logn)
// {
//     if (n == 0)
//         return 1;
//     int halfpow = printXn(x, n / 2);
//     int halfpowSq = halfpow * halfpow;
//     if (n % 2 != 0)
//     {
//         return x * halfpowSq;
//     }
//     return halfpowSq;
// }

// int printXn(int x, int n) // TIME COMPLEXITY = O(n)
// {
//     if (n == 0)
//         return 1;
//     return x * printXn(x, n - 1);
// }

int printXn(int x, int n) // TIME COMPLEXITY = O(n)
{
    if (n == 0)
        return 1;
    int halfPow = printXn(x, n / 2);
    int halfPowSq = halfPow * halfPow;
    if (n % 2 != 0)
    {
        return x * halfPowSq;
    }
    return halfPowSq;
}

int main()
{
    cout << printXn(5, 4) << endl;
    return 0;
}