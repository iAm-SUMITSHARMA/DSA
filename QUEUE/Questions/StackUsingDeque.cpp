#include <iostream>
#include <stack>
#include <deque>
using namespace std;
class Stack
{
    deque<int> deq;

public:
    // BY USING FRONT FUNCTION----- Preferable
    void push(int val)
    {
        deq.push_front(val);
    }
    void pop()
    {
        deq.pop_front();
    }
    int top()
    {
        deq.front();
    }
    bool empty()
    {
        return deq.empty();
    }

    // BY USING BACK FUNCTION-----
    // void push(int val)
    // {
    //     deq.push_back(val);
    // }
    // void pop()
    // {
    //     deq.pop_back();
    // }
    // int top()
    // {
    //     deq.back();
    // }
    // bool empty()
    // {
    //     return deq.empty();
    // }
};
int main()
{
    stack<int> s;
    for (int i = 1; i <= 5; i++)
    {
        s.push(i);
    }
    // output:  5 4 3 2 1
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}