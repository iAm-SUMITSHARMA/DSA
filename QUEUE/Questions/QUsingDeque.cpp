#include <iostream>
#include <queue>
#include <deque>
using namespace std;
class Queue
{
    deque<int> deq;

public:
    void push(int val)
    {
        deq.push_back(val);
    }
    void pop()
    {
        deq.pop_front();
    }
    int front()
    {
        deq.front();
    }
    bool empty()
    {
        return deq.empty();
    }
};
int main()
{
    queue<int> q;
    for (int i = 1; i <= 5; i++)
    {
        q.push(i);
    }
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}