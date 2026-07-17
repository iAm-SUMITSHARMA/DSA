#include <iostream>
#include <queue>
#include <string>
using namespace std;

struct CompairePair
{
    bool operator()(pair<string, int> &p1, pair<string, int> &p2) // default - maxHeap on the basis of second property
    {
        return p1.second < p2.second;
    }
};

int main()
{
    priority_queue<pair<string, int>, vector<pair<string, int>>, CompairePair> pq; // default - maxHeap
    pq.push(make_pair(string("rashmika"), 85));
    pq.push(make_pair(string("sumit"), 95));
    pq.push(make_pair(string("manoj"), 65));
    pq.push(make_pair(string("zivan"), 33));

    // pq.push({"rashmika", 85});
    // pq.push({"sumit", 95});
    // pq.push({"manoj", 65});

    while (!pq.empty())
    {
        cout << "Top student: " << pq.top().first << " with marks- " << pq.top().second << endl;
        pq.pop();
    }
}