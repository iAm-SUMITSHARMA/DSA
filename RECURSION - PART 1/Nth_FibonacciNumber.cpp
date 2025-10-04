#include <iostream>
using namespace std;
// int fibonacci(int n)
// {
//     if (n == 0 || n == 1)
//     {
//         return n;
//     }
//     return fibonacci(n - 1) + fibonacci(n - 2);
// }

int fibonacci(int n)
{
    if (n == 0 || n == 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    cout << fibonacci(8) << endl;
    // 0  1  1  2  3  5  8  13  21
    // 0  1  2  3  4  5  6  7   8 <---- TERMS
    return 0;
}