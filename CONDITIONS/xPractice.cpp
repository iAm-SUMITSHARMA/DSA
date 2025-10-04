#include <iostream>
using namespace std;
int main()
{
    char a;
    char b;
    cout << "Enter your first character : ";
    cin >> a;
    cout << "Enter your second character : ";
    cin >> b;
    // Not Mandatory------------
    // int A = int(a);
    // int B = int(b);
    cout << "Difference between ASCII of two charcters given by you is : " << (b - a);
}
