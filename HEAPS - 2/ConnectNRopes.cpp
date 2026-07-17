// Question: CONNECT N ROPES
// If cost to connect 2 ropes = sum of their lengths.
// Find *min cost* to connect N ropes.
// rope length = {4,3,2,6}
#include <iostream>
#include <queue>
#include <string>
using namespace std;
int connectNropes(vector<int> rope)
{
    priority_queue<int, vector<int>, greater<int>> pq(rope.begin(), rope.end()); // O(n)
    int ans = 0;
    while (pq.size()>1)
    {
        int min1 = pq.top();
        pq.pop();
        int min2 = pq.top();
        pq.pop();

        ans += (min1 + min2);
        pq.push(min1 + min2);
    }
    return ans ;
}
int main()
{
    vector<int> rope;
    rope.push_back(4);
    rope.push_back(3);
    rope.push_back(2);
    rope.push_back(6);

    cout << "answer: " << connectNropes(rope) << endl;
    return 0;
}