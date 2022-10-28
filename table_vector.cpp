#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<vector<int>> v{
        {1, 2, 3},
        {5, 6, 7},
        {8, 9, 0},

    };
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v.size(); j++)
        { // you can write v[i] also
            cout << v[i][j];
        }
        cout << endl;
    }

    cout << v[0][1] << endl
         << endl; // this will act as 2d matrix

    cout << "***********************************************\n";

    vector<int> q = {1, 2, 3, 4, 5}; // we don't need [ bracket]
    for (int i = 0; i < q.size(); i++)
    {
        cout << q[i] << " ";
    }
    cout << endl
         << endl;

    int p[5] = {1, 2, 3, 4, 5}; // in normal we need [] bracket
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << " ";
    }

    return 0;
}