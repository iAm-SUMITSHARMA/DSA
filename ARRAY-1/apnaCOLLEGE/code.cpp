#include <iostream>
using namespace std;
int main()
{
    char ch = 'b';
    char *ptr = &ch;
    cout << ptr << "\n";
    ptr++;
    cout << ptr << "\n";
}