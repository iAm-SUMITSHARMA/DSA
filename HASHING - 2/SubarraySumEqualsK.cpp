// QUESTION: SUBARRAY SUM EQUALS k

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
using namespace std;
// sum[i,j] = sum[j] - sum[i-1]
int subarraySumEqk(vector<int> nums, int k) // O(n)
{
    unordered_map<int, int> m; // sum, count
    m[0] = 1;
    int ans = 0;
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        if (m.count(sum - k))
        {
            ans += m[sum - k];
        }

        m[sum]++;
    }
    cout << ans << endl;
}
int main()
{
    vector<int> nums = {10, 2, -2, -20, 10};
    int k = -10;
    subarraySumEqk(nums, k);
}