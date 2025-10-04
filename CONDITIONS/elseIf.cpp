#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter marks: ";
    cin>>n;
    if(n>=91 && n<=100){
        cout<<"A";
    }
    else if(n>=81 && n<=90){
        cout<<"B";
    }
    else if(n>=71 && n<=80){
        cout<<"c";
    }
    else if(n>=61 && n<=70){
        cout<<"D";
    }
  
    else {
        cout<<"You faIled the exam";
    }
  
}