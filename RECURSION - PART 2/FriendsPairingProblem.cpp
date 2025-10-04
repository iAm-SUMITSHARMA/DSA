// Qn - Find total ways in which n friends can be paired up.
// Each friend can only be paired once.
// #include <iostream>
// using namespace std;
// int friendsPairing(int n)
// {
//     // self
//     // if (n == 0 || n == 1) // base case
//     // {
//     //     return 1;
//     // }

//     // by Shraddha khapra..
//     // if (n == 1 || n == 2) // base case
//     // {
//     //     return n;
//     // }

//     // self + Shraddha Khapra===
//     if (n <= 1) // base case
//         return 1;
//     if (n == 2) // base case
//         return 2;

//     // single = friendsPairing(n - 1);
//     // pair = (n-1)*friendsPairing(n - 2);
//     return friendsPairing(n - 1) + (n - 1) * friendsPairing(n - 2);
// }

// int main()
// {
//     cout << friendsPairing(5) << endl;
//     // ways   :  1  1  2  4  10  26
//     // friends:  0  1  2  3  4   5
//     return 0;
// }

// Qn - Find total ways in which n friends can be paired up.
// Each friend can only be paired once.

#include <iostream>
using namespace std;
int friendsPairing(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return friendsPairing(n - 1) + (n - 1) * friendsPairing(n - 2);
}
int main()
{
    cout << friendsPairing(5) << endl;
    cout << friendsPairing(2) << endl;
    cout << friendsPairing(1) << endl;
    cout << friendsPairing(4) << endl;
    cout << friendsPairing(6) << endl;
    // ways   :  1  1  2  4  10  26
    // friends:  0  1  2  3  4   5
    return 0;
}