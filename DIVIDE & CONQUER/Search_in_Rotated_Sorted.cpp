// SEARCH IN ROTATED SORTED... QN. NO. 33 ON LEETCODE...
// We have to solve this with the time complexity of O(logn).. Not with linear timecomplexity(linear search)...
#include <iostream>
#include <vector>
using namespace std;
int search(int *arr, int start, int end, int target)
{
    if (start > end)
    {
        return -1;
    }

    int mid = start + (end - start) / 2;
    if (arr[mid] == target)
    {
        return mid;
    }

    if (arr[start] <= arr[mid]) // L1
    {
        if (arr[start] <= target && target < arr[mid])
        { // left half
            return search(arr, start, mid - 1, target);
        }
        else
        { // right half
            return search(arr, mid + 1, end, target);
        }
    }

    else // L2
    {
        if (arr[mid] < target && target <= arr[end])
        { // right half
            return search(arr, mid + 1, end, target);
        }
        else
        { // left half
            return search(arr, start, mid - 1, target);
        }
    }
}
int main()
{
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int n = sizeof(arr) / sizeof(int);
    cout << search(arr, 0, n - 1, 0) << endl;
}