// QUESTION: MAJORITY ELEMENT:
// Find elements that appear more than n/3 times

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main()
{
    // vector<int> nums = {1, 3, 2, 5, 1, 3, 1, 5, 1};
    vector<int> nums = {1, 2};
    unordered_map<int, int> freq; // element , frequency
    for (auto x : nums)
    {
        freq[x]++;
    }
    int ap = nums.size() / 3;

    vector<int> ans;
    for (auto x : freq)
    {
        if (x.second >= ap)
        {
            ans.push_back(x.first);
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}