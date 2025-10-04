#include <iostream>
using namespace std;
int square(int x)
{
    for (int i = 1; i <= x; i++)
    {
        cout << "sqaure of " << i << " is : " << i * i << endl;
    }
}
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    square(n);
}