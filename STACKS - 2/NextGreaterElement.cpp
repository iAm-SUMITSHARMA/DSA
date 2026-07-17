#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;
void nextGreaterElement(vector<int> &arr, vector<int> &ans)
{
    stack<int> s;
    s.push(arr[arr.size() - 1]);
    ans[arr.size() - 1] = -1;
    for (int i = arr.size() - 2; i >= 0; i--)
    {
        int curr = arr[i];
        while (!s.empty() && curr >= s.top())
        {
            s.pop();
        }
        if (s.empty())
        {
            ans[i] = -1;
        }
        else
        {
            int nextGreater = s.top();
            ans[i] = nextGreater;
        }
        s.push(arr[i]);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}
int main()
{
    // next greater = first greater element that is to the right

    vector<int> arr = {6, 8, 0, 1, 3};
    vector<int> ans = {0, 0, 0, 0, 0};

    nextGreaterElement(arr, ans);
    return 0;
}