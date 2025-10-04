#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the no.: ";
    cin>>n;
    bool flag = true;
    for (int i = 2; i<=n-1; i++){
        if(n%i==0){
        flag = false;
        break;}
    }
         if(n==1 || n==0) cout<< "It is neither prime nor composite";
        else if(flag ==true) cout<<n<<"is prime";
    else cout<<"The no. is Compposite";

}