// Question: Find 1st non-repeating letter in a stream of characters
// Example: str = a  a b c c x b
// output:        a -1 b b b b x

#include <iostream>
#include <queue>
using namespace std;
void firstNonRepeatingLetter(string str) // TC = O(n) & SC = O(n)
{
    queue<char> q;
    int freq[26] = {0};
    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        q.push(ch);
        freq[ch - 'a']++;
        while (!q.empty() && freq[q.front() - 'a'] > 1)
        {
            q.pop();
        }
        if (q.empty())
        {
            cout << "-1" << " ";
        }
        else
        {
            cout << q.front() << " ";
        }
    }
}
int main()
{
    string str = {'a', 'a', 'b', 'c', 'c', 'x', 'b'};
    firstNonRepeatingLetter(str);
    return 0;
}