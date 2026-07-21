// QUESTION: LARGEST SUBARRAY WITH SUM 0

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
using namespace std;
//sum[i,j] = sum[j] - sum[i-1]
int largestSubarrayWithSumZero(vector<int> nums)
{
    int ans = 0;
    unordered_map<int, int> sumMap; // sum, idx
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        if (sumMap.count(sum))
        {
            ans = max(ans, i - sumMap[sum]);
        }
        else
        {
            sumMap[sum] = i;
        }
    }
    cout << ans;
}
int main()
{
    vector<int> nums = {15, -2, 2, -8, 1, 7, 10};
    largestSubarrayWithSumZero(nums);
}