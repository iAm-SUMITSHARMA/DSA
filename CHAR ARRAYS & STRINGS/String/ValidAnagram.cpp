// #include <iostream>
// #include <string>
// using namespace std;
// // METHOD 1: BY SORTING THE STRING=> SELF
// bool isAnagram(string str, string ptr)
// {
//     if (str.length() != ptr.length())
//     {
//         cout << "its not an anagram..." << endl;
//     }
//     else
//     {
//         cout << "Sorting string str & ptr: " << endl;
//         for (int i = 0; i < str.length() - 1; i++)
//         {
//             // clear => 1 acler , 2 acler , 3 acelr , 4 ,acelr
//             // sumit => 1 isumt , 2 imsut , 3 imsut , 4  imstu
//             for (int j = i; j < str.length(); j++)
//             {
//                 if (str[j] < str[i])
//                 {
//                     swap(str[i], str[j]);
//                 }

//                 if (ptr[j] < ptr[i])
//                 {
//                     swap(ptr[i], ptr[j]);
//                 }
//             }
//         }
//         for (int i = 0; i < str.length(); i++)
//         {
//             cout << str[i];
//         }
//         cout << endl;
//         for (int i = 0; i < ptr.length(); i++)
//         {
//             cout << ptr[i];
//         }
//         cout << endl;
//         // CHECKING IF ITS AN ANAGRAM OR NOT==========
//         int start = 0;
//         int end = str.length() - 1;
//         while (start < end)
//         {
//             if (str[start] != ptr[start] || str[end] != ptr[end])
//             {
//                 cout << "its not an anagram......." << endl;
//                 return false;
//             }
//             start++;
//             end--;
//         }
//         cout << "its a valid anagaram.." << endl;
//         return true;
//     }
// }
// int main()
// {
//     string str, ptr;
//     cout << "Enter your string str: " << endl;
//     getline(cin, str);
//     cout << "Enter your string ptr: " << endl;
//     getline(cin, ptr);
//     cout << "here is your string str: " << str << endl
//          << "here is your string ptr: " << ptr << endl;
//     isAnagram(str, ptr);
//     return 0;
// }

// REVISION==========
#include <iostream>
#include <string>
using namespace std;
bool isAnagram(string str, string ptr)
{
    // Method 1 :  Will sort string str & ptr
    if (str.length() != ptr.length())
    {
        cout << " Not valid anagram..." << endl;
    }
    else
    {
        for (int i = 0; i < str.length() - 1; i++) // s u m i t
        {
            for (int j = i; j < str.length(); j++)
            {
                // sorting string str & ptr;
                if (str[i] > str[j])
                {
                    swap(str[i], str[j]);
                }
                if (ptr[i] > ptr[j])
                {
                    swap(ptr[i], ptr[j]);
                }
            }
        }
        int start = 0, end = str.length() - 1;
        while (start < end)
        {
            if (str[start] != ptr[start] || str[end] != ptr[end])
            {
                cout << "its not a valid anagram..." << endl;
                return false;
            }
            start++;
            end--;
        }
        cout << "Its a valid anagram..." << endl;
        return true;
    }
}
int main()
{
    string str, ptr, kr;
    cout << "Enter your str: " << endl;
    getline(cin, str);
    cout << "Enter your ptr: " << endl;
    getline(cin, ptr);
    isAnagram(str, ptr);
    return 0;
}