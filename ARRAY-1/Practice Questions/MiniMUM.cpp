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
    int min = arr[0];
    for (int i = 1; i <= n - 1; i++)
    {
        if (arr[i] <= min)
            min = arr[i];
    }
    cout << min;
}