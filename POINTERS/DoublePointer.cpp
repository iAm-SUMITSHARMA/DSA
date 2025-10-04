#include <iostream>
using namespace std;
int main()
{
    // POINTER IS USED TO STORE ADDRESS OF A DATA TYPE ----------
    // DOUBLE POINTER IS USED TO STORE THE ADDRESS OF A POINTER-----------
    // WE CAN MAKE TRIPLE POINTER TOO---
    // TRIPLE POINTER IS USED TO STORE THE ADDRESS OF DOUBLE POINTER BUDDY... ------

    int x = 78;
    int *ptr = &x;
    int **p = &ptr;
    int ***q = &p;
    cout << "x equal to --" << x << endl;
    cout << "Address of x is : " << &x << endl;
    cout << "ptr equal to -- " << ptr << endl;
    cout << "p equal to --- " << p << endl;
    cout << "*ptr equal to : " << *ptr << endl;
    cout << "*p equal to : " << *p << endl;
    // IMPORTANT ================
    cout << "**p equal to : " << **p << endl;
    cout << "***q equal to : " << ***q << endl;
}