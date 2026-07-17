// #include <iostream>
// #include <vector>
// using namespace std;
// // int printXn(int x, int n) // TIME COMPLEXITY = O(logn)
// // {
// //     if (n == 0)
// //         return 1;
// //     int halfpow = printXn(x, n / 2);
// //     int halfpowSq = halfpow * halfpow;
// //     if (n % 2 != 0)
// //     {
// //         return x * halfpowSq;
// //     }
// //     return halfpowSq;
// // }

// // int printXn(int x, int n) // TIME COMPLEXITY = O(n)
// // {
// //     if (n == 0)
// //         return 1;
// //     return x * printXn(x, n - 1);
// // }

// int main()
// {
//     cout << printXn(5, 4) << endl;
//     return 0;
// }

#include <iostream>
using namespace std;
// TC = O(n)
// int xn(int base, int power)
// {
//     if (power == 0)
//         return 1;
//     return base * xn(base, power - 1);
// }

// TC = O(logn);
int xn(int base, int power)
{
    if (power == 0)
        return 1;
    int halfPow = xn(base, power / 2);
    int halfPowSq = halfPow * halfPow;
    if (power % 2 != 0)
        return base * halfPowSq;
    return halfPowSq;
}
int main()
{
    cout << xn(2, 5) << endl;
}