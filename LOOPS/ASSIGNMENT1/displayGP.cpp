#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // Q5. Display this GP - 3,12,48,.. upto ‘n’ terms.
    int n;
    cout << "Enter n : ";
    cin >> n;
    // SELF----
    //  for (int i = 3; i <= (3 * pow(4, (n - 1))); i *= 4)
    //  {
    //      cout << i << " ";
    //  }
    // Raghav Sir---
    int a = 3;
    int r = 4;
    while (n--)
    {
        cout << a << " ";
        a *= r;
    }
}