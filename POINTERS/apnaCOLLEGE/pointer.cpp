#include <iostream>
using namespace std;
int main()
{
    int a = 10;        // NORMAL VARIABLE
    int *ptr = &a;     // POINTER VARIABLE
    int **pptr = &ptr; // POINTER TO POINTER VARIABLE

    cout << &ptr << " = " << pptr << "\n";

    // DEREFERENCE OPERATOR:

    cout << ptr << endl;
    cout << *ptr << endl;

    *ptr = 222;
    cout<<a<<endl;
    
}