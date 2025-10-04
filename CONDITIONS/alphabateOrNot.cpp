#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter your character: ";
    cin>>ch;
   int as=(int)ch;

    if(as>=65&&as<=90){
        cout<<"Character is uppercase";
    }
    else if(as>=97&&as<=122){
        cout<<"Character is lowercase";
    }
    else{
        cout<<"character is not alphabate";
    }

}