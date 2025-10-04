#include <iostream>
using namespace std;
int HCF(int n, int m)
{
    int gcd = 1;     // gcd = GREATEST COMMON DIVISOR==
    // for (int i = 1; i <= min(n, m); i++)
    // {
    //     if (n % i == 0 && m % i == 0) //=> i is a common factor
    //     {
    //         gcd = i;
    //     }
    // }

    // THE BETTER WAY or THE MORE OPTIMISED WAY===
    for (int i = min(n, m); i >= 1; i--)
    {
        if (n % i == 0 && m % i == 0) //=> i is a common factor
        {
            gcd = i;
            break;
        }
    }
    return gcd;
}
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    int m;
    cout << "Enter m : ";
    cin >> m;
    cout << HCF(n, m);
}