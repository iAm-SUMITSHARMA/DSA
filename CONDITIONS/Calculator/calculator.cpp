#include <iostream>
using namespace std;
int main()
{
    float a, b;
    char op;
    cout << "Enter your expression : ";
    cin >> a >> op >> b;
    switch (op)
    {
    case '+':
        cout << (a + b);
        break;

    case '-':
        cout << (a - b);
        break;

    case '*':
        cout << (a * b);
        break;

    case '/':
        cout << (a / b);
        break;

    default:
        cout << "Invalid";
        break;
    }
}