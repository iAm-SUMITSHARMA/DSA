#include <iostream>
#include <vector>
#include <string>
using namespace std;
// create stack using vector with class Template
template <class T>
class Stack
{
    vector<T> vec;

public:
    void push(T val) // O(1)
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
    T top() // O(1)
    {
        // if (isEmpty())
        // {
        //     cout << "Stack is empty..." << endl;
        //     return -1;
        // }
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
    Stack<char> s;
    s.push('a');
    s.push('b');
    s.push('c');
    s.push('d');

    cout << "Printing stack: " << endl;
    while (!s.isEmpty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    return 0;
}