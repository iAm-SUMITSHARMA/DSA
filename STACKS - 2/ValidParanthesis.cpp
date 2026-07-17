#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;
bool isValid(string str)
{
    stack<char> s;
    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        // opening brackets/ paranthesis
        if (ch == '(' || ch == '[' || ch == '{')
        {
            s.push(ch);
        }
        else // closing
        {
            if (s.empty()) // corner case:  insufficient number of opening brackets
            {
                return false;
            }
            // match
            char top = s.top();
            if ((top == '(' && ch == ')') || (top == '[' && ch == ']') ||
                (top == '{' && ch == '}'))
            {
                s.pop();
            }
            else
            {
                return false;
            }
        }
    }

    if (s.empty()) // or we can just write: return s.empty();
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string str1 = "([}])";  // invalid : false
    string str2 = "([{}])"; // valid : true;

    cout << isValid(str1) << endl;
    cout << isValid(str2) << endl;
    return 0;
}
