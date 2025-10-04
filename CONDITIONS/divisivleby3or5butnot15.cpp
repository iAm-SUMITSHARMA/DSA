#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENter the no.";
    cin>>n;
    if(n%3==0 || n%5==0){
        if(n%15!=0){
            cout<<"no. is divisible by 3 or 3 but not by 15";
        }
           else{
        cout<<"not meet the condition";
    }
    }
    else{
        cout<<"not meet the condition";
    }
}