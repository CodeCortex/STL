#include <bits/stdc++.h>
using namespace std;

// print funcition
void print(map<int, string> &m)
{
    cout << m.size() << endl
         << endl;
    for (auto p : m)
    { // why &p is not working but it is working int the online compiler
        cout << p.first << " " << p.second << endl;
    }
    cout << endl;
}

int main()
{
    map<int, string> m;
    m[1] = "1abc"; // o(logn)
    m[2] = "2cdc";
    m[3] = "3abc";
    m[4] = "4abc";
    m[3] = "33abc"; // it will replace the previous data
    print(m);
    //****************************************************************************************

    // auto will detect itself what type of prototype is it
    auto it = m.find(2); // o(log(n));
    m.erase(it);
    // m.erase(3); //why not working but working in the online compiler
    print(m);

    //****************************************************************************************

    // never give a iterator which is not present in the map for erase

    auto unvalid_it = m.find(7);
    // m.erase(unvalid_it);

    // always use a condition for erase                         //must necessary
    if (unvalid_it != m.end())
        m.erase(unvalid_it);

    //****************************************************************************************

    auto i = m.find(8); // 8 is not present in the map
    if (i == m.end())
    {
        cout << "NO VALUE" << endl;
    }
    else
    {
        cout << i->first << " " << i->second;
    }

    //****************************************************************************************
    map<string, string> str;
    str["abc"] = "abc"; // s.size()*log(n)   //here string is comparing itself

    
    return 0;
}