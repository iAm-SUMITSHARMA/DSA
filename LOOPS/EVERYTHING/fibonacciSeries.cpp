#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    //****BY SELF=====

    int fibonacci = 1;
    int newFibo = 1;
    int z = 0;
    for (int i = 1; i <= n; i++)
    {
        cout << i << " " << fibonacci << endl;
        z = newFibo + fibonacci;
        fibonacci = newFibo;
        newFibo = z;
    }
}