#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter base : ";
    cin >> a;
    cout << "Enter exponent : ";
    cin >> b;
    // Using cmath and pow( , )====

    // cout << pow(a, b);

    // Using for loop===
    float power = 1;
    for (int i = 1; i <= b; i++)
    {
        power *= a;
    }

    // float minusPower = 1 / power;

    if (a == 0 && b == 0)
        cout <<"Not Defined";

    // else if (b < 0)
    //     cout << a << " raised to the power " << b << " equal to " << minusPower;

    else
        cout << a << " raised to the power " << b << " equal to " << power;
}