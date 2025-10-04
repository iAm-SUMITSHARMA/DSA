// Question 2 : For a given integer array of size N. You have to find all the occurrences
// (indices) of a given element (Key) and print them.
// Use a recursive function to solve this problem.
// Sample Input : arr[ ] = {3, 2, 4, 5, 6, 2, 7, 2, 2}, key = 2
// Sample Output : 1 5 7 8

#include <iostream>
#include <vector>
using namespace std;

// without i with output == > 8 5 7 1
// int binSearchAll(int *arr, int n, int key)
// {
//     if (n < 0)
//         return -1;
//     if (arr[n] == key)
//     {
//         cout << n << " ";
//     }
//     return binSearchAll(arr, n - 1, key);
// }
// int main()
// {
//     int arr[] = {3, 2, 4, 5, 6, 2, 7, 2, 2};
//     int n = sizeof(arr) / sizeof(int);
//     binSearchAll(arr, n - 1, 2); // 8 5 7 1
// }

// with i with output=> 1 5 7 8
int binSearchAll(vector<int> vec, int i, int key)
{
    if (i == vec.size())
        return -1;
    if (vec[i] == key)
    {
        cout << i << " ";
    }
    return binSearchAll(vec, i + 1, key);
}
int main()
{
    vector<int> vec = {3, 2, 4, 5, 6, 2, 7, 2, 2};
    binSearchAll(vec, 0, 2); // 8 5 7 1
}