#include <iostream>
using namespace std;
int digits(int n)
{
    int digit = 0;
    while (n != 0)
    {
        n /= 10;
        digit++;
    }
    return digit;
}
int square(int n)
{
    int square = n * n;
    return square;
}
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    cout << "Total digits in " << n << " is : ";
    cout << digits(n) << endl;
    cout << "Square of " << n << " is : ";
    cout << square(n);
}