#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    cout << v.size() << endl
         << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    cout << endl
         << endl;
    // list<int> ls(v.begin(), v.end());
    // for (auto i: ls)
    // {
    //     cout << i << endl;
    // }

    long long max = LLONG_MIN;
    long long min = LLONG_MAX;
    for (int i = 0; i < v.size(); i++)
    {
        long long store = v.front();
        auto it = v.begin();
        if(it!=v.end())
        v.erase(it);
        long long sum = accumulate(v.begin(), v.end(), 0);
        if (sum > max)
            max = sum;
        if (sum < min)
            min = sum;
        v.push_back(store);
    }
    cout << min << " " << max << endl;
    return 0;
}