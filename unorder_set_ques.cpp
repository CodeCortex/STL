// Given N string and Q queries. In each query, you are given a string
// print yes if present else print no
// N<10^6
//|s|<=100
// Q<=10^6

#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<string> s;
    // set<string>s;  //map is also working the online compler but not in vs code
    cout<<"enter the number of string you want to input"<<endl;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        string str;
        cin >> str;
        s.insert(str);
    }

cout<<"enter the number of queries"
<<endl;
    int Q;
    cin >> Q;
    while (Q--)
    {
        string x;
        cin >> x;
        if (s.find(x) == s.end())
        {
            cout << "no" << endl;
        }
        else
        {
            cout << "yes" << endl;
        }
    }

    return 0;
}