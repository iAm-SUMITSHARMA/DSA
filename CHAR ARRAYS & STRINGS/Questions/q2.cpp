// Question 2 : You are given two strings s1 and s2 of equal length. A string swap is an
// operation where you choose two indices in a string (not necessarily different) and
// swap the characters at these indices.
// Return true if it is possible to make both strings equal by performing at most one
// string swap on exactly one of the strings. Otherwise, return false.
// Example :
// Input: s1 = "bank", s2 = "kanb" Output:
// true
// Explanation: For example, swap the first character with the last character of s2 to
// make "bank".

#include <iostream>
#include <string>
using namespace std;
bool areEqual(string str, string ptr)
{
    int count[26] = {0};
    for (int i = 0; i < str.length(); i++)
    {
        count[str[i] - 'a']++;
    }
    for (int i = 0; i < ptr.length(); i++)
    {
        if (count[ptr[i] - 'a'] == 0)
        {
            cout << "Can't be swap... Don't have the same alphabets in the both string..." << endl;
            return false;
        }
        count[ptr[i] - 'a']--;
    }
    // cout << "Having same alphabets in the both string str and ptr..." << endl;
    // return true;

    int idx1, idx2, jam = 0;
    int start = 0, end = str.length() - 1;
    while (start < end)
    {
        // find indices of the letter which are not at the right place..
        if (jam < 3)
        {
            if (str[start] != ptr[start])
            {
                idx1 = start;
                jam++;
            }
            if (str[end] != ptr[end])
            {
                idx2 = end;
                jam++;
            }
        }
    }
    swap(ptr[idx1], ptr[idx2]);
    cout << "str == ptr" << (str == ptr) << endl;
    if (str == ptr)
    {
        cout << "Both strings become equal now..." << endl;
    }
    else
    {
        cout << "Strings not equal.." << endl;
    }
    return true;
}

// void swapString(string str, string ptr)
// {
//     int idx1, idx2, count = 0;
//     int start = 0, end = str.length() - 1;
//     while (start < end)
//     {
//         // find indices of the letter which are not at the right place..
//         if (count < 3)
//         {
//             if (str[start] != ptr[start])
//             {
//                 idx1 = start;
//                 count++;
//             }
//             if (str[end] != ptr[end])
//             {
//                 idx2 = end;
//                 count++;
//             }
//         }
//     }
//     swap(ptr[idx1], ptr[idx2]);
//     if (str == ptr)
//     {
//         cout << "Both strings become equal now..." << endl;
//     }
//     else
//     {
//         cout << "Strings not equal.." << endl;
//     }
// }

int main()
{
    string str, ptr;
    cout << "Enter your string str: " << endl; // bank
    getline(cin, str);
    cout << "Enter your string ptr: " << endl; // kanb
    getline(cin, ptr);
    areEqual(str, ptr);
    // if (areEqual(str, ptr) == true)
    // {
    //     swapString(str, ptr);
    // }
}