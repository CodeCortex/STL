// Given N strings, print unique starings in lexiographical order with their frequency
// n<=10^5
//|s|<=10000


//this is working in online compiler

#include <bits/stdc++.h>
#include<map>
using namespace std;

int main()
{

    map<string, int> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        // m[s]=m[s]+1;   //here m[s] is initially 0

        m[s]++;
    }
    for (auto pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }

    return 0;
}