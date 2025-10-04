#include <iostream>
using namespace std;
int main()
{
    int arr[] = {51, 56, 52, 697, 564, 2314, 85};
    // int *ptr = arr;                   //CORRECT WAY OF STORING ADDRESS IN AN ARRAY
    // int *ptr = &arr[0];                   //CORRECT WAY OF STORING ADDRESS IN AN ARRAY
    //______________________________________________________________
    // int *ptr = &arr;                   //WRONG WAY OF STORING ADDRESS IN AN ARRAY
    // int *ptr = arr[0];                   //WRONG WAY OF STORING ADDRESS IN AN ARRAY
    //______________________________________________________________

    // int *ptr = arr; // give address
    // OR
    int *ptr = &arr[0]; // give address
    for (int i = 0; i <= 6; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }
    ptr = arr; // ptr is pointing to first element
    cout << endl;

    // cout << ptr << endl;
    // ptr[0] = 69;
    // for (int i = 0; i <= 6; i++)
    // {
    //     cout << ptr[i] << " ";
    // }
    // cout << endl;
    // for (int i = 0; i <= 6; i++)
    // {
    //     cout << i(ptr) << " ";
    // or
    //     cout << i[arr] << " ";
    // }
    // cout << endl;
    *ptr = 8; // ptr[0] = 8
    ptr++;    // ptr is pointing to second element
    *ptr = 9;
    *ptr--; // ptr is pointing to first element
    for (int i = 0; i <= 6; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }
    ptr = arr; // ptr is pointing to first element
    cout << endl;
}