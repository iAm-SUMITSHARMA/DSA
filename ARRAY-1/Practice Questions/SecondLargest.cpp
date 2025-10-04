#include <iostream>
#include <climits>
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
    // MAXIMUM ELEMENT OF THE ARRAY===
    int max = arr[0];
    for (int i = 1; i <= n - 1; i++)
    {
        if (arr[i] >= max)
            max = arr[i];
    }
    cout << endl;
    cout << "The largest element of the array is : " << max << endl;
    // SECOND LARGEST ELEMENT OF THE ARRAY ====
    int SecondLargest = INT_MIN;
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] > SecondLargest && arr[i] != max)
            SecondLargest = arr[i];
    }
    cout << "The second largest element of the array is : " << SecondLargest << endl;
}