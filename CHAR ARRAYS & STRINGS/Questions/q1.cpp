// Question 1 : Count how many times lowercase vowels occurred in a String entered
// by the user.

#include <iostream>
#include <string>
using namespace std;
int getVowelCount(string str)
{
    int vowCount = 0;
    for (int i = 0; i < str.length(); i++)
    {
        // if (str[i] == 97 || str[i] == 101 || str[i] == 105 || str[i] == 111 || str[i] == 117)
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vowCount++;
        }
    }
    cout << "Total no. of vowels in your string is " << vowCount << endl;
    // return vowCount;
}
int main()
{
    string str;
    cout << "Enter your string: " << endl;
    getline(cin, str);
    getVowelCount(str);
    return 0;
}