#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;
// Recursive function to push at bottom of std::stack

void pushAtBottom(stack<int> &s, int value)
{
    if (s.empty())
    {
        s.push(value);
        return;
    }
    int temp = s.top();
    s.pop();
    pushAtBottom(s, value);
    s.push(temp);
}
// Time complexity of this code - pushAtBottom is linear time complexity
int main()
{
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);

    cout << "Printing stack before pushAtBottom: " << endl;
    stack<int> temp = s;
    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    pushAtBottom(s, 4);
    cout << "Printing stack after pushAtBottom: " << endl;
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}