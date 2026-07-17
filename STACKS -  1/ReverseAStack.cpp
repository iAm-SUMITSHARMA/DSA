#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;
// in QUESTION its clearly mentioned we will use recursion only.........
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
void reverse(stack<int> &s)
{
    if (s.empty())
        return;
    int temp = s.top();
    s.pop();
    reverse(s);
    pushAtBottom(s, temp);
}
void print(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}
// TIME COMPLEXITY FOR THIS CODE  : O(N)
// SPACE COMPLEXITY FOR THIS CODE  : O(N)
int main()
{
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);
    print(s);

    cout << "After Reverse: " << endl;
    reverse(s);
    print(s);
    return 0;
}
