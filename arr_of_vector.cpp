// creating the array of vector
#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v)
{
    cout << "vector size : " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    cout << "enter the number of vector you want" << endl;
    int N;
    cin >> N;
    vector<int> v[N];
    for (int i = 0; i < N; i++)
    {
        cout << "Enter number of data in " << i + 1 << " vector" << endl;
        int n;
        cin >> n;

        cout << "enter the data" << endl;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }
    // for loop for printing the data in each vector
    for (int i = 0; i < N; i++)
    {
        printVec(v[i]);
    }

    return 0;
}