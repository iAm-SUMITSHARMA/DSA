#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    bool flag = true; // TRUE MEANS PRIME
    for (int i = 2; i <= (n - 1); i++)
    {
        if (n % i == 0) // i is a factor of n
        {
            flag = false; // false means composite number
            break;
        }
        // cout << n << " is a composite number." << endl;
    }
    if ((n == 1 || n == 0))
        cout << n << " is Neither Prime Nor Composite";
    else if (flag == true)
        cout << n << " is a prime number.";
    else
        cout << n << " is a composite number.";
}