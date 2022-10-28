#include <bits/stdc++.h>
using namespace std;

void print(multiset<string> &s)
{
    cout << s.size() << endl;
    for (auto i : s)
    {
        cout << i << endl;
    }
}

int main()
{

    // multiset will print the duplicate but in the sorted ordered
    multiset<string> str;
    cout << "enter the number you want to make the string" << endl;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        str.insert(x);
    }
    print(str);
    //*******************************************************************
    auto s = str.find("abc"); // iterator will delete only those string where it is located
    if (s != str.end())
        str.erase(s);
    print(str);

    //*******************************************************************

    str.erase("d");   //simply erase button will delete all the string will same as d here
    print(str);

    return 0;
}