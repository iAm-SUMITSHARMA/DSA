#include <iostream>
using namespace std;
int main(){
    char ch;
    cout << "Enter your character babe:";
    cin >> ch;
    int ascii = (int)ch;
    // if(ascii>=97 && ascii<=122){
    //     cout<<"Bacha Tumhara character is a Small Letter..";

    // }
    // if(ascii>=65 && ascii<=90){
    //     cout<<"Bacha Tumhara character is a Capital Letter..";
    // }
    if ((ascii >= 97 && ascii <= 122) || (ascii >= 65 && ascii <= 90)){
        cout<<"The character is an alphabet";

    }
    else{
        cout<<"The character is not an alphabet";
    }
}

