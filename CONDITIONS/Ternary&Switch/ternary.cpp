#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter your number bacha:";
    cin>>x;
    // ******TERNARY OPERATOR SYNTAX-----
    // condition ? true : false
    x%2==0 ? cout<<"even" : cout<<"odd";
    // OR
    // (x%2==0) ? cout<<"even" : cout<<"odd";
}
