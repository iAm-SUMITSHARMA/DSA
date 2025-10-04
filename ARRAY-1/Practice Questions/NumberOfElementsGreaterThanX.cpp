#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    // Taking input=======
    cout << "Enter each and every element of the array: " << endl;
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
    // PRINTING THE ARRAY====
    cout << "Okay we got it, your array is : " << endl;
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }
    // TAKING X AS AN INPUT====
    int x;
    cout << endl
         << "Enter x : ";
    cin >> x;
    int count = 0;
    // CHECK MARK=========
    bool flag = false;
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] > x)
        {
            flag = true;
            count++;
        }
    }
    if (flag == true)
        cout << "Total number of elements greater than " << x << " is : " << count << endl;
    else
        cout << "None of the elements of the array is greater than " << x << endl;
}