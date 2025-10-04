// Example : string str = "appnnacollege";
// answer: "apncoleg"
// #include <iostream>
// #include <string>
// using namespace std;
// // with i========

// // void removeDup(string str, string ans, int i, int map[26])
// // {
// //     int mapIdx = (int){str[i] - 'a'}; //typecast
// //     if (i == str.size()) // base case;;;;;;;;;;;;;;;;;;
// //     {
// //         cout << "ans : " << ans << endl;
// //         return;
// //     }
// //     // if (map[mapIdx] == true) // mean its duplicate......
// //     if (map[mapIdx]) // mean its duplicate......
// //     {
// //         removeDup(str, ans, i + 1, map);
// //     }
// //     else // not duplicate
// //     {
// //         map[mapIdx] = true;
// //         removeDup(str, ans + str[i], i + 1, map);
// //     }
// // }

// // without i===========

// void removeDup(string str, string ans, int map[26])
// {
//     if (str.size() == 0) // base case;;;;;;;;;;;;;;;;;;
//     {
//         cout << "ans : " << ans << endl;
//         return;
//     }
//     int n = str.size();
//     char ch = str[n - 1];
//     int mapIdx = (int)(ch - 'a');
//     str = str.substr(0, n - 1);
//     // if (map[mapIdx] == true) // mean its duplicate......
//     if (map[mapIdx]) // mean its duplicate......
//     {
//         removeDup(str, ans, map);
//     }
//     else // not duplicate
//     {
//         map[mapIdx] = true;
//         removeDup(str, ch + ans, map);
//     }
// }
// int main()
// {
//     // string str = "appnnacollege"; //apncoleg
//     // string str = "aaaabbbbbbbbcdwwwwwwwwwww";
//     string ans = " ";
//     int map[26] = {false};

//     // with i======
//     // removeDup(str, ans, 0, map);

//     // without i======
//     string str = "appnnacollege"; // pnacolge
//     // string str = "aaaabbbbbbbbcdwwwwwwwwwww"; // abcdw
//     removeDup(str, ans, map);
//     return 0;
// }

// Example : string str = "appnnacollege";
// answer: "apncoleg"
#include <iostream>
#include <string>
using namespace std;

// with i================>>>
// void removeDup(string str, string ans, int i, int map[26])
// {
//     int mapIdx = (int){str[i] - 'a'};
//     if (i == str.size())
//     {
//         cout << ans << endl;
//         return;
//     }
//     if (map[mapIdx] == true)
//     {
//         return removeDup(str, ans, i + 1, map);
//     }
//     else
//     {
//         map[mapIdx] = true;
//         return removeDup(str, ans + str[i], i + 1, map);
//     }
// }
// int main()
// {
//     string str = "appnnacollege";
//     int map[26] = {false};
//     removeDup(str, " ", 0, map);
//     return 0;
// }

// without i==============>>>
void removeDup(string str, string ans, bool map[26])
{
    // base case
    if (str.empty())
    {
        cout << ans << endl;
        return;
    }
    char ch = str.back();
    int mapIdx = ch - 'a';
    // if (map[mapIdx] == true)
    if (map[mapIdx])
    {
        removeDup(str.substr(0, str.size() - 1), ans, map);
    }
    else
    {
        map[mapIdx] = true;
        removeDup(str.substr(0, str.size() - 1), ans + ch, map); // eglocanp
        // removeDup(str.substr(0, str.size() - 1),  ch + ans, map); // pnacolge
    }
}
int main()
{
    string str = "appnnacollege";
    bool map[26] = {false};
    removeDup(str, " ", map);
    return 0;
}