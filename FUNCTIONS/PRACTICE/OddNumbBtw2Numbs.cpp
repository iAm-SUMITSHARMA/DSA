#include <iostream>
using namespace std;
int odd(int a, int b)
{
    for (int i = min(a, b); i <= max(a, b); i++)
    {
        if (i % 2 != 0)
            cout << i << endl;
    }
}
int main()
{
    int a;
    cout << "Enter a : ";
    cin >> a;

    int b;
    cout << "Enter b : ";
    cin >> b;
    cout << "All odd numbers between " << a << " and " << b << " is :" << endl;
    odd(a, b);
}