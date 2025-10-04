// #include <iostream>
// #include <cstring>
// using namespace std;
// int main()
// {
//     char word[] = "ApPle";
//     // char ch1 = 'z'; //97=>122
//     // char dfd = 'Z'; //65=>90
//     int n = strlen(word);
//     for (int i = 0; i < n; i++)
//     {
//         if (word[i] >= 'a' && word[i] <= 'z')
//         {
//             word[i] = word[i] - ('a' - 'A');
//         }
//         else
//             continue;
//     }
//     cout << word;
// }

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char word[] = "AppLe";
    for (int i = 0; i < strlen(word); i++)
    {
        if (word[i] >= 'a' && word[i] <= 'z')
        {
            word[i] = word[i] - ('a' - 'A');
        }
        else
            continue;
    }
    cout << word << endl;
}