#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of the array: ";
    cin >> n;
    int arr[n];
    // INPUT:
    cout << "Enter each and every element of the array buddy: " << endl;
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout << "Enter the number you want to search (x): ";
    cin >> x;
    // CHECK MARK==
    bool flag = false; // false-> means element not present
    //  SEARCH====
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] == x)
            flag = true;
    }
    if (flag == true)
    {
        cout << "x(" << x << ") is present in the array..." << endl;
        // cout << "Here is the index number of the x - I mean " << x << " : " << endl;
    }
    else
        cout << "404 - element not found";
}

// NOTE: initially ham bool ko false rakhte hai..........