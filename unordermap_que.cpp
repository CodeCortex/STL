// Given N strings and queries.
//  In each query you are given a string
// print frequency of that string

// N<=10^6
//|s|<=100
//  Q <= 10^6

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // since in question there is not mention of lexiogically so we use unordered
    unordered_map<string, int> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s]++;
    }

    int q;
    cin >> q;

    while (q--)
    {
        string s;
        cin >> s;
        cout << m[s] << endl; // this will print the frequency of the string
                              // that occur in the above m[s]
    }

    return 0;
}