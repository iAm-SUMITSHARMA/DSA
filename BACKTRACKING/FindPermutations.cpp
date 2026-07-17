// qn. find and print all permutations(arrangement) of a given string.

// # pERMUTATION: rearrangement of element
// ## total number of permutations of n elements = n!

// ## timecomplexity in permutation = O(n!)
// But in worst  case: O(n)

#include <iostream>
#include <string>
#include <vector>
using namespace std;
void printPermutations(string str, string ans)
{
    if (str.size() == 0)
    {
        cout<< ans << endl;
        return;
    }
    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        // substr(start, length)
        string nextstr = str.substr(0, i) + str.substr(i + 1, str.size() - 1 - i);
        printPermutations(nextstr, ans + ch); //ith character choice to add in permutation
    }
}
int main()
{
    string str = "abc";
    string ans = "";
    printPermutations(str, ans);
    return 0;
}