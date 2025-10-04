#include <iostream>
using namespace std;
// N to 1- decreasing order function...
void print(int n)
{
    if (n == 0) // base case
    {
        return;
    }
    cout << n << " "; // kaam
    print(n - 1);     // inner function
}
// 1 to N - increasing order function...
void print(int n)
{
    if (n == 0) // base case
    {
        return;
    }
    print(n - 1);     // inner function
    cout << n << " "; // kaam
}
int main()
{
    print(5);
    return 0;
}

