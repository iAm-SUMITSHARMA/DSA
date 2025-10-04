#include <iostream>
using namespace std;
void swap(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "Now, after swaping both these number : " << endl;
    cout << "Your a = " << a << " and your b = " << b << endl;
}
int main()
{
    int a;
    cout << "Enter a : ";
    cin >> a;
    int b;
    cout << "Enter b : ";
    cin >> b;
    cout << "Your a = " << a << " and your b = " << b << endl;
    swap(a, b);
}