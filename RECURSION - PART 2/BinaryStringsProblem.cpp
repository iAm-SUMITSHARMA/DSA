// Qn - Print all Binary Strings of size N without any consecutive 1s...
// Example : " 01010101010001"
// #include <iostream>
// using namespace std;
// void binaryStringProblem(int n, int lastPlace, string ans)
// {
//     if (n == 0)
//     { // base case
//         cout << ans << endl;
//         return;
//     }
//     if (lastPlace != 1)
//     {
//         binaryStringProblem(n - 1, 0, ans + '0');
//         binaryStringProblem(n - 1, 1, ans + '1');
//     }
//     else
//     {
//         binaryStringProblem(n - 1, 0, ans + '0');
//     }
// }
// int main()
// {
//     string ans = " ";
//     binaryStringProblem(4, 0, ans);
//     // strings:  "" 2  3  5  8
//     // n :       0  1  2  3  4
//     return 0;
// }

// Qn - Print all Binary Strings of size N without any consecutive 1s...
// Example : " 01010101010001"
// #include <iostream>
// using namespace std;
// void binaryStringProblem(int n, int lastPlace, string ans)
// {
//     if (n == 0)
//     {
//         cout << ans << endl;
//         return;
//     }
//     if (lastPlace != 1)
//     {
//         binaryStringProblem(n - 1, 0, ans + '0');
//         binaryStringProblem(n - 1, 1, ans + '1');
//     }
//     else
//     {
//         binaryStringProblem(n - 1, 0, ans + '0');
//     }
// }
// int main()
// {
//     string ans = " ";
//     binaryStringProblem(4, 0, ans);
//     // strings:  "" 2  3  5  8
//     // n :       0  1  2  3  4
//     return 0;
// }

// Qn - Print all Binary Strings of size N without any consecutive 1s...
// Example : " 01010101010001"
#include <iostream>
using namespace std;
void binaryStringsProblem(int n, int lastPlace, string ans)
{
    if (n == 0)
    {
        cout << ans << endl;
        return;
    }
    if (lastPlace != 1)
    {
        binaryStringsProblem(n - 1, 1, ans + "1");
        binaryStringsProblem(n - 1, 0, ans + "0");
    }
    else
        binaryStringsProblem(n - 1, 0, ans + "0");
}
int main()
{
    string ans = " ";
    binaryStringsProblem(4, 0, ans);
    //  0-> " " , 1-> [2] , 2 -> [3], 3 -> [5], 4 -> [8]
}