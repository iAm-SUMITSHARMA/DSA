#include <iostream>
using namespace std;
int main()
{
    // int arr[4] = {85, 56, 23, 75};
    // int sum = 0;
    // for (int i = 0; i <= 3; i++)
    // {
    //     sum += arr[i];
    // }
    // cout << "Sum of all elements in the above array : " << sum;

    // TAKING INPUT FROM USER:
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int sum = 0;
    int arr[n];
    // INPUT==========
    cout << "Enter each and every element of the array : " << endl;
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Sum of all elements in the above array : " << sum;
}