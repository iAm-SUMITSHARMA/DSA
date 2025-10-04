#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no. for which You want to find Factorial: ";
    cin>>n;
    if(n<0){cout<<"Invalid input. Factorial of negative number does not exist"; }
   else{int fact = 1;
    for(int i =1; i<=n; i++ ){
       
       fact = fact*i;
    }
    cout<<"Factorial of "<< n <<" is "<<fact<<endl;
    }

}