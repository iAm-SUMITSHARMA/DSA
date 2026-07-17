#include <iostream>
#include <vector>
using namespace std;
// create stack using vector
class Stack
{
    vector<int> vec;

public:
    void push(int val) // O(1)
    {
        vec.push_back(val);
    }
    void pop() // O(1)
    {
        if (isEmpty())
        {
            cout << "Stack is empty..." << endl;
            return;
        }
        vec.pop_back();
    }
    int top() // O(1)
    {
        if (isEmpty())
        {
            cout << "Stack is empty..." << endl;
            return -1;
        }
        int lastIdx = vec.size() - 1;
        return vec[lastIdx];
    }
    bool isEmpty()
    {                           // O(1)
        return vec.size() == 0; // return true
    }
};
int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout << "Printing stack: " << endl;
    while (!s.isEmpty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    return 0;
}