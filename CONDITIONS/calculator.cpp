#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
      cout<<"Enter the operation to perform: ";
    cin>>op;
    cout<<"Enter first no.: ";
    cin>>a;
    cout<<"Enter second no.: ";
    cin>>b;
  
    if(op=='+')  cout<<(a+b);
    if(op=='-')  cout<<(a-b);
    if(op=='*')  cout<<(a*b);
    if(op=='/')  cout<<(a/b);
    



}