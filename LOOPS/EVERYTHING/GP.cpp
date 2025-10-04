#include <iostream>
// #include <cmath>
using namespace std;
int main()
{
    //*****GP---- 1, 2, 4, 8, 16, 32, 64.... upto n terms

    // ----using Extra variable====

    // int n;
    // cout << "Enter n : ";
    // cin >> n;
    // int a = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << a << endl;
    //     a = a * 2;
    // }

    
    //*****GP---- 2, 6, 18, 54.... upto n terms

    // ----using Extra variable====

    int n;
    cout << "Enter n : ";
    cin >> n;
    int a = 2;
    for (int i = 1; i <= n; i++)
    {
        cout << a << endl;
        a = a * 3;
    }

    
}