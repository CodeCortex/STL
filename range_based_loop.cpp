#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v{1, 2, 3, 4, 5};

    // range based loop
    for (int val : v)
    { // copy will happen so you can't update val
        cout << val << " ";
    }
    cout << endl;
    //*****************************************************************

    for (int &val : v)
    {                 // call by reference so you can update
        if (val == 3) // you can add condition also
            val++;
        cout << val << " ";
    }
    cout << endl;
    //*****************************************************************

    vector<pair<int, string>> vec = {{1, "ram"}, {2, "jyoti"}, {3, "roshan"}};
    for (pair<int, string> value : vec) // we didn't use vector because we are copying the data and pair is the data
    {
        cout << value.first << " " << value.second << endl;
    }
    cout << endl;

    //******************************* auto **********************************

    // auto will detect easily what type of datatype is it

    vector<pair<int, string>> vect = {{1, "ram"}, {2, "jyoti"}, {3, "roshan"}};
    for (auto v : vect) // auto will detect what type of datatype is this
    {
        cout << v.first << " " << v.second << endl;
    }
    //*****************************************************************
    return 0;
}