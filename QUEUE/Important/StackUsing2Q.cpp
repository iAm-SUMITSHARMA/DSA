#include <iostream>
#include <queue>
using namespace std;

// It also have 2 approaches------
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
// q1->q2
// q1->push(data);
// q2->q1
class Stack
{
    queue<int> q1;
    queue<int> q2;

public:
    void push(int data)
    {
        // q1->q2
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        // q1->push(data)
        q1.push(data);
        // q2->q1
        while (!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
    }
    void pop()
    {
        q1.pop();
    }
    int top()
    {
        return q1.front();
    }
    bool empty()
    {
        return q1.empty();
    }
};
int main()
{
    // Stacks ussing 2 Q:::::::::::::::
    // solving by APPROACH 1 : ---------

    Stack s1;
    s1.push(3);
    s1.push(2);
    s1.push(1);
    while (!s1.empty())
    {
        cout << s1.top() << " ";
        s1.pop();
    }
    cout << endl;
    return 0;
}