#include<iostream>
#include<cstring>
using namespace std;
int main(){
    // char word[30];
    // cin>>word; // ignore words/letters after whitespace
    // cout<<"your word was: "<<word<<endl;
    // cout<<"your word length is : "<<strlen(word)<<endl;

    char sentence[30];
    cin.getline(sentence, 30, '*');
    cout<<"your word was: "<<sentence<<endl;
    cout<<"your word length is : "<<strlen(sentence)<<endl;
    
}