#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the number of students: ";
    cin>>n;
    int arr[n] ;
    // INPUT...
    cout<<"ENter the marks: ";
    for(int i = 0; i<=n-1;i++){
    cin>>arr[i];

  }
// OUTPUT....
  for(int i = 0; i<=n-1;i++){
   if(arr[i]<35) cout<<i+1<<" ";
  }
}