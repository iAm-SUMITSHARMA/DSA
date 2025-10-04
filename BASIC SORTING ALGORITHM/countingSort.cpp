#include <iostream>
#include <climits>
using namespace std;
// FINAL TIME COMPLEXITY OF COUNTING SORT IS O(n + range) , IN MOST CASES WHERE RANGE IS SMALL .. THERE TIME COMPLEXITY WILL ALMOST BE EQUAL TO THE O(n);;;;;;;;
void countingSort(int *arr, int n)
{
    int freq[100000] = {0};
    // CALCULATE MIN_ARR AND MAX_ARR:
    // FIRST STEP: TIME COMPLEXITY FOR THIS LOOP IS O(N)
    int min_arr = INT_MAX;
    int max_arr = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]] = freq[arr[i]] + 1;
        min_arr = min(min_arr, arr[i]);
        max_arr = max(max_arr, arr[i]);
    }
    // SECOND STEP: TIME COMPLEXITY FOR THIS LOOP IS O(RANGE) = max-min
    for (int i = min_arr, j = 0; i <= max_arr; i++)
    {
        while (freq[i] > 0)
        {
            arr[j++] = i;
            freq[i]--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {1, 4, 1, 3, 2, 4, 3, 7};
    int n = sizeof(arr) / sizeof(int);
    countingSort(arr, n);
    return 0;
}