#include<iostream>
using namespace std;
int main(){
    int n ;
     cout<<"Enter the no. :";
     cin>>n;
     int r= 0;
     while(n>0){
       r = r*10;
        int b = n%10;
        r = (r+b);
        n = n/10;
     }
     cout<<r;
}