#include<iostream>
using namespace std;
int main(){
   int n ; 
   cout<<"Enter the no.:";
   cin>>n;
   bool flag = true;
   for(int i = 2; i<=(n-1);i++){
   if(n%i==0){
    flag = false;
break;
    }
   
   }
   if(flag==true) cout<<n<<" is a cprime no"<<endl;
   
   else cout<<n<<" is composit";

   
}
