#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "hello sumit";
    // .length() is a member function of the string class, used to get the number of characters.
    // for (int i = 0; i < str.length(); i++) // dot operator
    // {
    //     cout<<str[i]<<"-";
    // }
    // cout<<endl;
    for (char ch : str) // This loop prints each character followed by a dash.
    {
        cout << ch << ",";
    }
    cout << endl;
}
// We use the dot operator (.) to access it from the string object 'str'
