#include <iostream>
using namespace std;
int fact(int x)
{
    int f = 1;
    for (int i = 2; i <= x; i++)
    {
        f *= i;
    }
    return f;
}
int permutation(int n, int r)
{
    int npr = fact(n) / fact(n - r);
    return npr;
}
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    int r;
    cout << "Enter r : ";
    cin >> r;
    int npr = permutation(n, r);
    cout << npr;
}