#include <bits/stdc++.h>
using namespace std;

void print(set<string> &s)
{
    // one way
    for (auto value : s)
    {
        cout << value << endl;
    }
    cout << endl;

    // second way
    /*
    for (string val : s)
    {
        cout << val << endl;
    }
    cout << endl;
    */

    // third way
    /*
    for (auto i = s.begin(); i != s.end(); i++) // here int value will not work because s is not the integer type
    {
        cout << (*i) << endl;
    }
    cout<<endl;
    */
}

int main()
{
    // set is same as the map but in this key value is not used
    set<string> s;
    s.insert("abc"); // log(n)
    s.insert("abc"); // it will remove the duplicate value
    s.insert("zsdf");
    s.insert("bcd");
    print(s);
    //**********************************************************************************
    // find function
    auto it = s.find("abc"); // log(n)
    if (it != s.end())
    { // most necessay for the find function otherwise error
        cout << (*it) << endl
             << endl;
    }
    print(s);

    //**********************************************************************************

    // erase function
    if (it != s.end())
    {
        s.erase(it);
    }
    print(s);
    cout << endl;

    // another way
    s.erase("bcd");
    print(s);
    //**********************************************************************************

    return 0;
}