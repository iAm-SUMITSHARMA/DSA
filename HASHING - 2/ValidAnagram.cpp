// QUESTION: VALID ANAGRAM
// s = "race" t = "care"
// same frquency for each element

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;
int main()
{
    string s = "race";
    string t = "care";
    unordered_map<char, int> freq;
    if(s.size()!=t.size()){
        return false;
    }
    for(auto x: s){
        freq[x]++;
    }
    for(auto x: t){
        if(freq[x] == 0){
            cout<<"not exist"<<endl;
        }
        freq[x]--;
    }
}