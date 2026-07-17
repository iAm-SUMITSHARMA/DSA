#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    map<int, string>m;
    m[101] = "rahul";
    m[112] = "sneha";
    m[120] = "rahul";
    
    m[120] = "simran";
    cout<<m[112]<<endl;
    cout<<m[1000]<<endl;
    cout<<m[120]<<endl;

    cout<<m.count(101)<<endl;
    cout<<m.count(200)<<endl;

    for(auto it: m){
        cout<<"key- " <<it.first<< " value: "<<it.second<<endl;
    }
    return 0;
}