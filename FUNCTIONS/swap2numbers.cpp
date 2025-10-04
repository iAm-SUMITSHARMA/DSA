#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a : ";
    cin >> a;
    int b;
    cout << "Enter b : ";
    cin >> b;
    cout << "Your a = " << a << " and your b = " << b << endl;

    // METHOD - 1 : USING ANOTHER VARIABLE TEMP===
    //  int temp = a;
    //  a = b;
    //  b = temp;
    //  cout << "Now, after swaping both these number : " << endl;
    //  cout << "Your a = " << a << " and your b = " << b << endl;

    // METHOD - 2 : WITHOUT USING ANY VARIABLE===  example: A= 3 & B=5 -> A=5 & B =3
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "Now, after swaping both these number : " << endl;
    cout << "Your a = " << a << " and your b = " << b << endl;
}