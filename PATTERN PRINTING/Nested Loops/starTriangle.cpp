#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Row : ";
    cin >> n;
    // int m;
    // cout<<"Enter Column : ";
    // cin>>m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}