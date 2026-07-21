// QUESTION: ITINERAY FROM TICKETS
// Plane tickets Pairs<from, to>
// Chennai -> Bengaluru
// Mumbai -> Delhi
// Goa -> Chennai

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
using namespace std;
void printIteratory(unordered_map<string, string> tickets)
{
    // STEP 1: To find starting point
    unordered_set<string> to;
    for(pair<string, string> p: tickets){
        to.insert(p.second);
    }

    string start = "";
    for(pair<string, string> p: tickets){
        if(to.find(p.first) == to.end()){
            start = p.first;
        }
    }
    cout<<start<<"->";
    while(tickets.count(start)){ // from = key = start, value = tickets[start]= to
        cout<<tickets[start]<<"->";
        start = tickets[start];
    }
    cout<<"destination"<<endl;
}
int main()
{
    unordered_map<string, string> tickets;
    tickets["Chennai"] = "Benagaluru";
    tickets["Mumbai"] = "Delhi";
    tickets["Goa"] = "Chennai";
    tickets["Delhi"] = "Goa";

    printIteratory(tickets);
}