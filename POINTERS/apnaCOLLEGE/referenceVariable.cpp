#include <iostream>
using namespace std;

// PASS BY REFERENCE BY USING REFERENCE VARIABLES:

void changeA(int &param)
{
    param = 209;
    cout << param << endl;
}
int main()
{
    int a = 88;
    // int &b = a;   // NOTE:  ALWAYS YOU HAVE TO INITIALISE REFERENCE VARIABLE OTHERWISE IT WILL NOT WORK.
    changeA(a);
    // b = 29;
    cout << a << endl;
    // cout << b << endl;
}