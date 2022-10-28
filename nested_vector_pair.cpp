// #include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

void printVec(vector<pair<int, int>> &v)
{
    cout << "size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
    cout << endl
         << endl;
}

int main()
{
    // one way
    vector<pair<int, int>> v = {{2, 3}, {4, 5}, {6, 7}};

    // second way
    vector<pair<int, int>> b = {make_pair(2, 3), make_pair(4, 5), make_pair(6, 7)};

    // v.push_back(10,3);    //this will not work in nested pair
    b.push_back({10, 3});
    b.push_back(make_pair(101, 30));

    v.emplace_back(10, 3);

    printVec(v);
    printVec(b);
}