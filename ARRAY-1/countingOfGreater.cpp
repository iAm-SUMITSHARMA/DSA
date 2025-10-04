#include<iostream>
using namespace std;
int main(){
    int arr[10]= {1,2,356,76,45,76,34,65,98,100};
    int x;
    cout<<"Enter the value of X: ";
    cin>>x;
    int count = 0;
    for(int i = 0;i<=9; i++){
       if(arr[i]>x) count++;
    }
    cout<<"Total "<<count<<" elements are greater than X";
}