#include<iostream>
using namespace std;
int main(){
   int cp,sp,profit,loss;
  
   cout<<"Enter the selling price: ";
   cin>>sp;
   
   cout<<"Enter the cost price: ";
   cin>>cp;
if(sp>cp){
    cout<<"there is  a profit of: ";
    cout<<sp-cp;
}
else if(sp==cp){
cout<<"ther eis no loss no profit";
}
else{
    cout<<"there is a loss of: ";
    cout<<cp-sp;
}

    return 0;

}