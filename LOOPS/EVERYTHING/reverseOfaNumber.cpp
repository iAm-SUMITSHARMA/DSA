#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter no. : ";
    cin >> n;
    int z = n;
    int reverse = 0;
    for (; n > 0; n = n / 10)
    {

        reverse = (reverse * 10);
        reverse = reverse + (n % 10);
    }
    cout << "Reverse of " << z << " is " << reverse;
}