// 3 no of test case
// firstName lastName 3 (number of subject)
// 10 20 30   (marks of each subjects)

#include <bits/stdc++.h>
using namespace std;

int main()
{

    map<pair<string, string>, vector<int>> m;
    cout << "no of test case you want" << endl;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "enter the first name and last name" << endl;
        string firstName, lastName;
        cin >> firstName >> lastName;

        cout << "enter the number of subject you want" << endl;
        int k;
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            int x;
            cin >> x;
            m[{firstName, lastName}].push_back(x); // because of pair
        }
    }

    // for printing purpose
    //run in online compiler but no in my laptop
    for (auto &pr : m)
    {
        auto &fullName = pr.first; // pair is stored in fullName
        cout << fullName.first << fullName.second << endl;

        auto &list = pr.second; // vector is assign in list
        cout << list.size() << endl;
        for (auto &element : list)
        {
            cout << element << endl;
        }
    }

    return 0;
}
