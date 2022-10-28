// this gives same output as the creating the array of vector but in this i and j both are dynamic
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
    vector<vector<int> > v; //vector of vector
    for (int i = 0; i < N; i++)
    {
        cout << "Enter number of data in " << i + 1 << " vector" << endl;
        int n;
        cin >> n;

        cout << "enter the data" << endl;
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    // for loop for printing the data in each vector
    for (int i = 0; i < N; i++)
    {
        printVec(v[i]);
    }

    return 0;
}