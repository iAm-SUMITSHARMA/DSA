#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;
// TIME COMPLEXITY FOR THIS CODE  : O(N)
// SPACE COMPLEXITY FOR THIS CODE  : O(N)
string reverseString(string str)
{
    string ans;
    stack<char> s;
    for (int i = 0; i < str.size(); i++)
    {
        s.push(str[i]);
    }
    while (!s.empty())
    {
        char top = s.top();
        ans += top;
        s.pop();
    }
    return ans;
}
int main()
{
    string str = "sumit";

    cout << str << endl;
    cout << "reverse : " << reverseString(str) << endl;
    return 0;
}