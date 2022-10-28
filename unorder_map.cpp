#include <bits/stdc++.h>
using namespace std;
void print(unordered_map<int, string> &m)
{
    cout << m.size() << endl;
    for (auto pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}

int main()
{
    unordered_map<int, string> m;
    unordered_map<pair<int, int>, string> str; // this will return error pair cannot use

    m[1] = "rajan";
    m[2] = "hari";
    m[10] = "roshan";
    m[3] = "gita";
    m[4] = "ita";

    print(m);

    return 0;
}