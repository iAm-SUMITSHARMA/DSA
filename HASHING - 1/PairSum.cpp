class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m; // value, index = key, value
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            int comp = target - nums[i];
            if (m.count(comp)) {
                ans.push_back(m[comp]); // m[comp] = index of comp
                ans.push_back(i);
                break;
            }
            m[nums[i]] = i;
        }
        return ans;
    }
};