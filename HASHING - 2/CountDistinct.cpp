// QUESTION: COUNT DISTINCT
// distinct means unique

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
using namespace std;
void countDistincts(vector<int> nums)
{
    unordered_set<int> k;
    for (auto x : nums)
    {
        k.insert(x);
    }
    for (auto x : k)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << "size: " << k.size() << endl;
}
int main()
{
    vector<int> nums = {4, 3, 2, 5, 6, 7, 3, 4, 2, 1};
    countDistincts(nums);
}