// #include <iostream>
// using namespace std;
// // recursive factorial - recursion...
// int facto(int n)
// {
//     if (n == 0) // base case
//     {
//         return 1;
//     }
//     return n * facto(n - 1);
// }
// int main()
// {
//     cout << facto(5);
//     return 0;
// }

#include <iostream>
using namespace std;
int factorial(int n)
{
    // base case
    // inner function
    // kaam
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
int main()
{
    cout << factorial(5) << endl;
    return 0;
}