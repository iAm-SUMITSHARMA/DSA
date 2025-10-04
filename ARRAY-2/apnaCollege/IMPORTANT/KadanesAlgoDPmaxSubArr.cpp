#include <iostream>
#include <climits>
using namespace std;
void maxSubArraySum1(int *arr, int n)
{
    int maxSum = INT_MIN;
    for (int start = 0; start < n; start++)
    {
        int sum = 0;
        for (int i = start; i < n; i++)
        {
            sum += arr[i];
            cout << sum << ",";
            maxSum = max(maxSum, sum);
            if (sum < 0)
            {
                sum = 0;
            }
        }
        cout << endl;
    }

    cout << "maximum no. among all is : " << maxSum << endl;
}

int main()
{
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    maxSubArraySum1(arr, n);
}