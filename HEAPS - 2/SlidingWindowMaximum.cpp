// Question: SLIDING WINDOW MAXIMUM
// Maximum of all subarrays of size K
// 1,2,3,4,5,6,7,8,9,10 and k = 3
// 3,4,5,6,7,8,9,10 -> answer

#include <iostream>
#include <queue>
#include <string>
using namespace std;
void slidingWindowMax(vector<int> arr, int k)
{
    priority_queue<pair<int, int>> pq;
    for (int i = 0; i < k; i++) // first sliding window
    {
        pq.push(make_pair(arr[i], i));
    }

    cout << "output: " << pq.top().first << " ";
    for (int i = k; i < arr.size(); i++)
    {
        while (!pq.empty() && pq.top().second <= (i - k))
        {
            pq.pop();
        }
        pq.push(make_pair(arr[i], i));
        cout << pq.top().first << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> arr = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    slidingWindowMax(arr, k);
    return 0;
}