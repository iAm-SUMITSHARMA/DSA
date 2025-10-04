#include <iostream>
using namespace std;
void funct(int arr[])
{
    arr[0] = 992948;
}
void funct2(int *ptr)
{
    ptr[0] = 222444333;
}
int main()
{
    int a = 9;
    int *ptr = &a;
    cout << ptr << endl;
    int arr[] = {91, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);

    // cout << arr << endl; // ARRAY TO POINTER CHANGE HO JATA HAI...
    // cout << *arr << endl;           // arr[0]
    // cout << *(arr + 1) << endl;     // arr[1]
    // cout << *(arr + 2) << endl;     // arr[2]
    // cout << *(arr + 3) << endl;     // arr[4]
    // cout << *(arr + 4) << endl;     // arr[5]

    funct2(arr); // PASSING ARRAY NAME IS EQUIVALENT TO PASSING THE POINTER.
    cout << arr[0] << endl;
}