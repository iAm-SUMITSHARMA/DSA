#include <iostream>
using namespace std;
// PASS BY VALUE USING POINTER======

// WILL MAKE THE COPY AND WILL NOT CHANGE THE VALUE OF a IN THE MAIN FUNCTION .

// void changeA(int a)
// {
//     a = 20;
//     cout << a << endl;
//     ;
// }
// int main()
// {
//     int a = 9;
//     changeA(a);
//     cout << a << endl;
// }

// PASS BY REFERENCE BY USING POINTER=====

void changeA(int *ptr)
{
    *ptr = 20;
    cout << *ptr << endl;
}

// WILL CHANGE THE VALUE OF a  IN THE MAIN FUNCTION.

int main()
{
    int a = 990;
    cout << a << endl;
    changeA(&a);
    cout << a << endl;
    return 0;
}
