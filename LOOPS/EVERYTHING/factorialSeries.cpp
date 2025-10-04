#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter your number : ";
    cin >> n;
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial*i;
        cout<<i<<"! = "<<factorial<<endl;
    }
}