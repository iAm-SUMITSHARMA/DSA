#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <set>
using namespace std;
int main()
{
    // unordered_set<int>s; //for unordered_set
    set<int>s; // for set
    s.insert(1);
    s.insert(5);
    s.insert(3);
    s.insert(2);
    s.insert(1); // DUPLICATE VALUES NOT INSERT IN SETS
    s.insert(1);// DUPLICATE VALUES NOT INSERT IN SETS
    s.insert(1);// DUPLICATE VALUES NOT INSERT IN SETS

    cout<<"size: "<<s.size()<<endl;

    if(s.find(3) != s.end()){
        cout<<"3 exists "<<endl;
    }else{
        cout<<"not exist..."<<endl;
    }

    cout<<"After erasing 3: "<<endl;
    s.erase(3);
    if(s.find(3) != s.end()){
        cout<<"3 exists "<<endl;
    }else{
        cout<<"not exist..."<<endl;
    }

    for(auto x: s){
        cout<<x<<" ";
    }
    cout<<endl;
}

