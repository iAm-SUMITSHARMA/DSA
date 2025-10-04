#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int digit = 0;
    int z = n; // I use z to store n.So that I can print it in the last..

    //*****--- FOR LOOP-------

    for (; n > 0; n = n / 10)
    {

        digit = digit + 1;
    }
    if (z == 0)
        cout << "Number of digits in " << 0 << " is : " << 1;
    else
        cout << "Number of digits in " << z << " is : " << digit;

    //*****--- WHILE LOOP-------

    // while (n > 0)
    // {
    //     n = n / 10;
    //     digit = digit + 1;
    // }
    // if (z == 0)
    //     cout << "Number of digits in " << 0 << " is : " << 1;
    // else
    //     cout << "Number of digits in " << z << " is : " << digit;
}