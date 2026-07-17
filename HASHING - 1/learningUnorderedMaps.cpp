#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    // key, value
    unordered_map<string, int> m;
    m["China"] = 150;
    m["India"] = 150;
    m["US"] = 50;
    m["UK"] = 30;
    m["UP"] = 20;
    m["Nepal"] = 10;

    for (pair<string, int> country : m)
    {
        cout << country.first << "," << country.second << endl;
    }

    if (m.count("Canada"))
    {
        cout << "Canada exists" << endl;
    }
    else
        cout << "Canada doesn't exists" << endl;

    // erase / remove function
    m.erase("Nepal");
    if (m.count("Nepal"))
    {
        cout << "Nepal exists" << endl;
    }
    else
        cout << "Nepal doesn't exists" << endl;

    m["China"] = 500; // assigned new value to china 
}


// for maps: 

// #include <iostream>
// #include <map>
// using namespace std;
// int main()
// {
//     // key, value
//     map<string, int> m;
//     m["China"] = 150;
//     m["India"] = 150;
//     m["US"] = 50;
//     m["UK"] = 30;
//     m["UP"] = 20;
//     m["Nepal"] = 10;

//     for (pair<string, int> country : m)
//     {
//         cout << country.first << "," << country.second << endl;
//     }

//     if (m.count("Canada"))
//     {
//         cout << "Canada exists" << endl;
//     }
//     else
//         cout << "Canada doesn't exists" << endl;

//     // erase / remove function
//     m.erase("Nepal");
//     if (m.count("Nepal"))
//     {
//         cout << "Nepal exists" << endl;
//     }
//     else
//         cout << "Nepal doesn't exists" << endl;

//     m["China"] = 500; // assigned new value to china 
// }
