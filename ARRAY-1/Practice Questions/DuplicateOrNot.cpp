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
    cout << endl;
    int find = arr[0];
    // CHECK MARK======
    bool flag = false;
    for (int i = 1; i <= n - 1; i++)
    {
        if (arr[i] == find)
        {

            flag = true;
            find = arr[i + 1];
        }
    }

    if (flag == true)
    {
        cout << "Yes, array contains duplicate..." << endl;
    }
    else
        cout << "No, array does not contain any duplicate element..." << endl;
}