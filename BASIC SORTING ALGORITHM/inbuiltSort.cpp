#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    int arr[] = {1, 4, 1, 3, 2, 4, 3, 7};
    int n = sizeof(arr) / sizeof(int);
    // IT SORTS THE ARRAY IN THE ASCENDING ORDER======
    sort(arr + 2, arr + 5);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // SORT IN DESCENDING ORDER=======
    sort(arr, arr + 8, greater<int>());
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}