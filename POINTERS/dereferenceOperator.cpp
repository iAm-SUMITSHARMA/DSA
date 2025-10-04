#include <iostream>
using namespace std;
int main()
{
    //* -> star operator
    // int x = 34;
    // int* p = &x;
    // x =  36;
    // cout<<p<<endl;
    // cout<<*p<<endl;   // dereference operator

    int x = 134;
    int *p = &x;
    cout << x << endl;
    *p = 9;
    cout << x << endl;
}