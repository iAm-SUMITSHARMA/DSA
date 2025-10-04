#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "cat";
    string ptr = "tac";
    cout << "(str > ptr) = " << (str > ptr) << endl;  // false -> 0
    cout << "(str < ptr) =" << (str < ptr) << endl;   // true -> 1
    cout << "(str == ptr) =" << (str == ptr) << endl; // false -> 0
    cout << "(str != ptr) =" << (str != ptr) << endl; // true -> 1
}