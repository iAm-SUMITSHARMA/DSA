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
    // PRINTING THE PRODUCT OF THE ELEMENTS OF THE ARRAY:
    int product = 1;
    for (int i = 0; i <= n - 1; i++)
    {
        product *= arr[i];
    }
    cout << endl
         << "Product of all the elements of the array is : " << product << endl;
}