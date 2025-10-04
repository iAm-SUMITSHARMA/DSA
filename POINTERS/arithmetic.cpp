#include <iostream>
using namespace std;
int main()
{
    // FOR int DATA TYPE : --------------

    // int x = 7;
    // int *ptr = &x;
    // cout << ptr << endl;
    // ptr = ptr + 1;
    // cout << ptr << endl; 

    // FOR BOOLEAN : --------------

    // bool flag = true;
    // bool *ptr = &flag;
    // cout << ptr << endl;
    // ptr = ptr + 1;
    // cout << ptr << endl;

    // int x = 4;
    // int *ptr = &x;
    // cout << *ptr << endl; // 4 will print
    // ptr = ptr + 1;
    // cout << *ptr << endl;   // will print random number

    // int x = 4;
    // int *ptr = &x;
    // cout << *ptr << endl; // 4 will print
    // *ptr = *ptr + 1;
    // cout << *ptr << endl; // 5 will print

    int x = 4;
    int *ptr = &x;
    cout << *ptr << endl;      // 4 will print
    (*ptr)++;                 // x = x + 1
    cout << *ptr << endl;    // 5 will print
}