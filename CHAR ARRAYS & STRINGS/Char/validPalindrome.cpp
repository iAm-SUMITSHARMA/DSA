#include <iostream>
#include <cstring>
using namespace std;
bool palin(char *word, int n){
    int start = 0;
    int end = n-1;
    while(start<end){ 
        //check if word[start] = word[end] or not
        if(word[start++] != word[end--]){
            cout<<"not valid palindrome"<<endl;
            return false;
        }
    }
    cout<<"Valid Palindrome"<<endl;
}
int main()
{
    char word[] = "racecar";
    palin(word,strlen(word));
}