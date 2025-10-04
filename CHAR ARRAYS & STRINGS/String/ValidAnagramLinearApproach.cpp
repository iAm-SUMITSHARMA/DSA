// #include <iostream>
// #include <string>
// using namespace std;
// // METHOD 2 : LINEAR APPROACH
// // TIME COMPLEXITY IS O(n+m) , where the largest between n and m will control the time complexity.. i.e. if n>>>m , then Time Complexity = O(n).. Similarly vice versa.... where n denotes str.length() and m denotes ptr.length()...
// bool isAnagram(string str, string ptr)
// {
//     if (str.length() != ptr.length())
//     {
//         cout << "not valid anagrams..." << endl;
//         return false;
//     }
//     else
//     {
//         // will create an array of name count and store the frequency of the letters of string str...
//         // then we will divide the frequency of the letters of string str (which we have already stored in the array count) from the frequency of string ptr..
//         int count[26] = {0};
//         for (int i = 0; i < str.length(); i++)
//         {
//             count[str[i] - 'a']++;
//         }
//         for (int i = 0; i < ptr.length(); i++)
//         {
//             if (count[ptr[i] - 'a'] == 0)
//             {
//                 cout << "Not a valid anagram.." << endl;
//                 return false;
//             }
//             count[ptr[i] - 'a']--;
//         }
//         cout << "valid anagrams...." << endl;
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
//     isAnagram(str, ptr);
//     return 0;
// }

// weekly I can do the exercise for 3 days right now.. Because it makes my body tired and later I just went to sleep.. Which result in just wasting my whole day in just sleeping...
// And also I don't want to sleep in front of these peoples........ It feels like I am lazy and there is always the afraid of getting targeted for these little things in the future... And if someone does this to me.. I swear I will be break down.. I don't know what to do right now.. I have to do something which can result in higher productivity...
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
// Which will be very shameful for me in the future so.. Its better to not be lazy..
// Do the exercise 3 times a week.... Eat plenty of food.. Focus on yourself... Do DSA..  Make some OG level project... And prove them wrong.... NOT only them.. Prove everyone wrong... Make your life worth it..
// Show the world what you can do ...
// And what are you capable of ...
// Show them who are you...

#include <iostream>
#include <string>
using namespace std;
// METHOD 2 : LINEAR APPROACH
// TIME COMPLEXITY IS O(n+m) , where the largest between n and m will control the time complexity.. i.e. if n>>>m , then Time Complexity = O(n).. Similarly vice versa.... where n denotes str.length() and m denotes ptr.length()...
bool isAnagram(string str, string ptr)
{
    if (str.length() != ptr.length())
    {
        cout << "Not a valid anagram.." << endl;
    }
    else
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
                cout << "its not a valid anagram..." << endl;
                return false;
            }
            count[ptr[i] - 'a']--;
        }
        cout << "Its a valid anagram..." << endl;
        return true;
    }
}
int main()
{
    string str, ptr;
    cout << "Enter your string str: " << endl;
    getline(cin, str);
    cout << "Enter your string ptr: " << endl;
    getline(cin, ptr);
    isAnagram(str, ptr);
}

// I want someone in my life to cuddle to have just infront of me and say sumit are you okay..  have you eaten.. do you want something... stop it I will do it for you... I just want someone in my life to fought for me over everyone.. I want to be someone's favoirate... I want to be someone's first priority.. I want someone's first choice... I want someone who does not make me feel like I am disturbing her or wasting time.. i want some