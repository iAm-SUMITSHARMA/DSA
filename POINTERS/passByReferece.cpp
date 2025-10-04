#include <iostream>
using namespace std;

// void swap(int *x, int *y)
// {
//     int temp = *x;
//     *x = *y;
//     *y = temp;
//     return;
// }

// int main()
// {
//     int a, b;
//     cout << "Enter a and b : ";
//     cin >> a >> b;
//     swap(&a, &b);
//     cout << a << " " << b;
// }

// OR

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}

int main()
{
    int a = 8, b = 45;
    // cin >> a >> b;
    int *x = &a;
    int *y = &b;
    swap(x, y);
    cout << a << " " << b;
}