#include <iostream>
using namespace std;
int fact(int x)
{
    int f = 1;
    for (int i = 1; i <= x; i++)
    {
        f *= i;
    }
    return f; // will gonna return the values=____
}
int combination(int n, int r)
{
    int ncr = fact(n) / (fact(r) * fact(n - r));
    return ncr;
}
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    int r;
    cout << "Enter r : ";
    cin >> r;
    // int nfact = fact(n); // fact() -> function calling
    // int rfact = fact(r);
    // int nrfact = fact(n - r);
    // int ncr = nfact / (rfact * nrfact);
    int ncr = combination(n, r);
    cout << ncr;
}