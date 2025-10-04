//BY RAGHAV SIR-----------------
#include <iostream>
using namespace std;
void calculate(int n, int *ptr1, int *ptr2)
{
    *ptr2 = n % 10; // lastDigit
    while (n > 9)
    {
        n /= 10;
    }
    *ptr1 = n;
    return;
}

int main()
{
    int n;
    cout << "Enter n :";
    cin >> n;
    int firstDigit, lastDigit;
    int *ptr1 = &firstDigit;
    int *ptr2 = &lastDigit;
    calculate(n, ptr1, ptr2);
    cout << "First Digit of " << n << " is : " << firstDigit << endl;
    cout << "Last Digit of " << n << " is : " << lastDigit;
}