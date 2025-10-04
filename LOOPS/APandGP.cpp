#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"enter no. of term: ";
   cin>>n;
   int a = 4;
//    for(int i = 1; i<=(2*n-1); i+=2){
//     cout<<i<<endl;
//    }
for(int i =1; i<=n;i++){
    cout<<a<<endl;
    a+=3;
}
}