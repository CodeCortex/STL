#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, string> p;

    // you can also initalize by
    // one way
    p.first = 12;
    p.second = "Roshan";
    cout << p.first << " " << p.second << endl
         << endl;  

//     second way
     p = {20,"jyoti"};
     cout<<p.first<<endl;
     cout<<p.second<<endl;
     cout<<endl;

    // third way
    p = make_pair(50, "Rajan");
    cout << p.first << " " << p.second << endl
         << endl;

    pair<int, string> q = p; // pass by value
    q.first = 60;            // this will not change the value
    cout << p.first << " " << p.second << endl
         << endl;

    pair<int, string> &r = p; // pass by reference
    r.first = 80;             // this will change the value
    cout << p.first << " " << p.second << endl
         << endl;

    // a[]={1,2,3}
    // b[]={4,5,6}
    // suppose you want to make the pair between 1-4, 2-5 and 3-6 then

    pair<int, int> p_array[3];
    p_array[0] = make_pair(1, 4);
    p_array[1] = make_pair(2, 5);
    p_array[2] = make_pair(3, 6);

    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << "  " << p_array[i].second << endl
             << endl;
    }
    cout << "*****************************************" << endl;

    // swaping the array 0 and 2
    swap(p_array[0], p_array[2]);

    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << "  " << p_array[i].second << endl
             << endl;
    }

    // taking input in the pair

    cout << "*****************************************" << endl;
    pair<string, string> str;
    cin >> str.first;
    cout << str.first;
    //same way you can cin the second part
}