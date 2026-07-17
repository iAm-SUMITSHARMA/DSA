#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;
bool isDuplicate(string str)
{
    stack<char> s;
    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        if (ch != ')') // non-closing
        {
            s.push(ch);
        }
        else // closing
        {
            if (s.top() == '(')
            {
                return true; // DUPLICATE KI CONDITION
            }
            while (s.top() != '(')
            {
                s.pop();
            }
            s.pop(); // opening bracket ko bhi hata diya
        }
    }
    return false;
}
int main()
{
    // ASKED IN GOOGLE & MICROSOFT

    string str1 = "((a+b) + (c+d))"; //  non-duplicate : false;
    string str2 = "((a+b) + ((z)))"; // duplicate : true;

    cout << isDuplicate(str1) << endl;
    cout << isDuplicate(str2) << endl;
    return 0;
}
