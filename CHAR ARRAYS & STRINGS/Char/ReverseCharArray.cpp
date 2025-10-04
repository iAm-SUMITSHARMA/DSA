// #include <iostream>
// #include <cstring>
// using namespace std;
// void revch(char *word, int n)
// {
//     int start = 0;
//     int end = n - 1;
//     while (start < end)
//     { // you can write start<=end but = will not make any change and also it will not effect out time complexity.. As a programmer you should know which sign is useful and which is not... Similarly in this case you should know whether equal to is required or not , will equal to make any change to my code or not.. If yes then use it.. If not try to not use it and keep these basic things in the mind.. Even you can use <= ... this will not make any change.. But as a programmer you should know whether the things , you are using is making any impact or not...
//         // int temp = word[start];
//         // word[start] = word[end];
//         // word[end]= temp;
//         // start++;
//         // end--;
//         swap(word[start++], word[end--]);
//     }
// }
// int main()
// {
//     char word[] = "codem";
//     int n = strlen(word);
//     revch(word, n);
//     cout << word;
// }

#include <iostream>
#include <cstring>
using namespace std;
void revCh(char *word, int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        swap(word[start++], word[end--]);
    }
    cout << word;
}
int main()
{
    char word[] = "sumit";
    revCh(word, strlen(word));
}