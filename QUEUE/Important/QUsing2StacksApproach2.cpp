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

// solving by APPROACH 2 : ---------

class Queue
{
    stack<int> s1;
    stack<int> s2;

public:
    
};
int main()
{
    // Q ussing 2 stacks:::::::::::::::
    // solving by APPROACH 2 : ---------

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