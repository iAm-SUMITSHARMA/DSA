// Qn:  Find if any pair in sorted vector has target sum.
// input : arr = [2,7,11,15] , target = 9
// output : [0,1] // vector of indices
#include <iostream>
#include <vector>
using namespace std;
vector<int> pairSum(vector<int> vec, int target)
{
    int start = 0, end = vec.size() - 1;
    int currSum = 0;
    vector<int> ans;
    while (start < end)
    {
        currSum = vec[start] + vec[end];
        if (currSum == target)
        {
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
        else if (currSum > target)
        {
            end--;
        }
        else if (currSum < target)
        {
            start++;
        }
    }
    return ans;
}
int main()
{
    vector<int> vec{2, 7, 11, 15};
    int target;
    cout << "Enter target sum: " << endl;
    cin >> target;
    // brutal approach
    // for (int i = 0; i < vec.size(); i++)
    // {
    //     for (int j = i + 1; j < vec.size(); j++)
    //     {
    //         // cout << "[" << vec[i] << "," << vec[j] << "]" << endl;
    //         if (vec[i] + vec[j] == target)
    //         {
    //             cout << "[" << i << "," << j << "]" << endl;
    //         }
    //     }
    // }

    // two pointer approach
    vector<int> ans = pairSum(vec, target);
    cout << ans[0] << "," << ans[1] << endl;
    return 0;
}
