#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str1[100] ="mango ";
    char str2[100] ="x";
    // strcpy(str1, str2); // => str1 = str2 => copy string from str2 and paste it into str1
    // cout<<str1<<endl;
    // strcat(str1, str2); //=>str1 = str1 + str2 => add string 2 into string 1 and string 1 become str1 + str2
    // cout<<str1<<endl;
    cout<<strcmp(str1, str2); //=>compares two strings based on values(-ve, 0, +ve)
    return 0;
}