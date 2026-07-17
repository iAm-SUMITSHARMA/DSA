#include <iostream>
#include <stack>
using namespace std;

// APPROACH 1:
// push(): O(n)
// pop()--------->
//               |------> O(1)
// front() ------>

// APPROACH 2:
//  pop(): O(n)
// push()--------->
//               |------> O(1)
// front() ------>

// solving by APPROACH 1 : ---------
// s1->s2
// s1->push(data);
// s2->s1
class Queue
{
    stack<int> s1;
    stack<int> s2;

public:
    void push(int data) // O(n)
    {
        // s1->s2
        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        // s1->push(data);
        s1.push(data);
        // s2->s1
        while (!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }
    void pop() // O(1)
    {
        s1.pop();
    }
    int front() // O(1)
    {
        return s1.top();
    }
    bool empty()
    {
        return s1.empty();
    }
};
int main()
{
    // Q ussing 2 stacks:::::::::::::::
    // solving by APPROACH 1 : ---------

    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    return 0;
}