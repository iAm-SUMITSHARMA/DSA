#include <iostream>
using namespace std;
int main()
{
    int n;
    int *pn = &n;
    cout << "Enter first number: " << endl;
    cin >> *pn;
    int m;
    int *pm = &m;
    cout << "Enter second number : " << endl;
    cin >> *pm;
    cout << "sum = " << *pn + *pm << endl;
    // or
    // cout << "sum = " << n + *pm << endl;
    // or
    // cout << "sum = " << *pn + m << endl;
    // or
    // cout << "sum = " << n + m << endl;
}