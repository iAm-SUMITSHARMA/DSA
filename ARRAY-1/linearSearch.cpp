#include<iostream>
using namespace std;
int main(){
       int n ;
    cout<<"Enter size of array ";
    cin>>n;
    int arr[n] ;
    int x = 5;
    // INPUT...
    cout<<"Enter elements of array: ";
    for(int i = 0; i<=n-1;i++){
    cin>>arr[i];

  }
// OUTPUT....
  for(int i = 0; i<=n-1;i++){
   if(arr[i]==x) cout<<i<<" ";
  }
}