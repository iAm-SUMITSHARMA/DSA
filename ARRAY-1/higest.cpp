#include<iostream>
using namespace std;
int main(){
     int n ;
    cout<<"Enter size of array ";
    cin>>n;
    int arr[n] ;
  
    // INPUT...
    cout<<"Enter elements of array: ";
    for(int i = 0; i<=n-1;i++){
    cin>>arr[i];
  }

  int max = arr[0];
  for(int i = 1;i<=n-1;i++){
    if(max<arr[i]){
        max = arr[i];
    }
  }
  int smax = arr[0];
  for(int i = 1;i<=n-1;i++){
    if(smax<arr[i] && arr[i]!=max){
        smax = arr[i];
    }
  }
  cout<<smax<<" is maximum in the array";
}