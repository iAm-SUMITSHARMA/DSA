#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    // *****METHOD - 1====

    // for (int i = 0; i <= (2 * n - 1); i += 2)
    // {
    //     cout << i << endl;
    // }

    // *****METHOD - 2=====
    // Separate/Extra Variable...

    // AP--- 1 3 5 7 9 ....
    // int a = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout<<a<<endl;
    //     a = a + 2;
    // }

    // AP---- 4 7 10 13 16 19 22...
    int a = 4;
    for (int i = 1; i <= n; i++)
    {
        cout << a << endl;
        a = a + 3;
    }
}