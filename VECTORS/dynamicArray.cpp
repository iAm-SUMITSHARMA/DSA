#include <iostream>
using namespace std;
int main()
{
    // int arr[30] = {1,2,3,4,5};
    int size;
    cout << "Enter your array size: " << endl;
    cin >> size;
    int *arr = new int[size]; // dynamically allocating memory..
    
    // arr[0] =>derefrance=> *(arr + 0)
    // arr[1] => *(arr + 1)
    // arr[2] => *(arr + 2)
    int x = 1;
    for (int i = 0; i < size; i++)
    {
        arr[i] = x++;
        cout << arr[i] << " ";
        // x++;
    }

    return 0;
}