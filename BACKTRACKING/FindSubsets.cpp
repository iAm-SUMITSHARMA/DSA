// Qn.Find & print all subsets of a given string..

// NOTE: in Subsets : order not matter............

// ## tOTAL NO. OF SUBSETS OF A SET(CAN BE ARRAY, STRING , VECTOR , many more) : equal to 2^n
#include <iostream>
#include <string>
#include <vector>
using namespace std;
void printSubsets(string str, string subset)
{
    if (str.size() == 0)
    {
        cout << subset << endl;
        return;
    }
    char ch = str[0];
    //  yes choice: means the element wants to come in subset
    printSubsets(str.substr(1, str.size() - 1), subset + ch);
    //  no choice: means the element don't want to come in subset
    printSubsets(str.substr(1, str.size() - 1), subset);
}
int main()
{
    string str = "abc";
    string subset = "";
    printSubsets(str, subset);
    return 0;
}