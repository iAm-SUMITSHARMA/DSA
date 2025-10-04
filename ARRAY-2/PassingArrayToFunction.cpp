#include <iostream>
using namespace std;
void display(int a[], int size) // int *a // PASS BY REFERENCE
{
    for (int i = 0; i <= 4; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return;
}
void change(int b[], int size) // int*b
{
    b[0] = 199;
}
int main()
{
    int arr[] = {3, 56, 89, 4, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << size << endl;
    display(arr, size);
    change(arr, size);
    display(arr, size);
    // for (int i = 0; i <= 4; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
}