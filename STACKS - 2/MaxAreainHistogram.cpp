#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;
void maxAreaHistogram(vector<int> &height)
{
    stack<int> s;
    int n = height.size();
    vector<int> nsl(n);
    vector<int> nsr(n);
    // next smaller left : Tc: O(N)
    nsl[0] = -1;
    s.push(0);
    for (int i = 1; i < n; i++)
    {
        int curr = height[i];
        while (!s.empty() && curr <= height[s.top()])
        {
            s.pop();
        }
        if (s.empty())
        {
            nsl[i] = -1;
        }
        else
        {
            nsl[i] = s.top();
        }
        s.push(i);
    }
    // next smaller right : Tc: O(N)
    while (!s.empty()) // its necessary to make our stack empty before proceeding to next smaller right
    {
        s.pop();
    }
    nsr[n - 1] = n;
    s.push(n - 1);
    for (int i = n - 2; i >= 0; i--)
    {
        int curr = height[i];
        while (!s.empty() && curr <= height[s.top()])
        {
            s.pop();
        }
        if (s.empty())
        {
            nsr[i] = n;
        }
        else
        {
            nsr[i] = s.top();
        }
        s.push(i);
    }
    // calculating Area:
    int maxArea = 0;
    for (int i = 0; i < n; i++)
    {
        int area = height[i] * (nsr[i] - nsl[i] - 1);
        maxArea = max(maxArea, area);
    }

    cout << maxArea << endl;
}
int main()
{
    // ASKED IN FACEBOOK , PAYTM & MICROSOFT

    vector<int> height = {2, 1, 5, 6, 2, 3};
    maxAreaHistogram(height); // Tc: O(N)
    return 0;
}