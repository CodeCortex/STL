#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {1, 2, 3, 4, 5};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    //*****************************************************************

    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    //*****************************************************************

    vector<int>::iterator it;
    for (it = v.begin(); it < v.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;
    //*****************************************************************
    // |
    // |
    // |
    // best way
    // vector<int>::iterator it;   replace by auto
    for (auto itt = v.begin(); itt < v.end(); itt++)
    {
        cout << (*itt) << " ";
    }
    cout << endl;
    //*****************************************************************

    vector<pair<int, int>> v_p = {{1, 2}, {3, 4}, {4, 5}, {5, 6}};
    vector<pair<int, int>>::iterator it_p; // it_p we should declare the iterator as the prototype declare

    // one way
    for (it_p = v_p.begin(); it_p != v_p.end(); ++it_p)
    {
        // cout<<(*it_p);  //this is wrong beacause pair contain the first and second element
        cout << (*it_p).first << " " << (*it_p).second << endl;
    }
    cout << endl;
    //*****************************************************************

    // another way
    for (it_p = v_p.begin(); it_p != v_p.end(); ++it_p)
    {
        cout << (it_p->first) << " " << (it_p->second) << endl;
    }

    //(*it).first <=> (it->first)
    //*****************************************************************
}