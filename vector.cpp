#include <bits/stdc++.h>
using namespace std;

void printvector(vector<int> &v)
{
    cout<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] <<" ";
    }
    cout<<endl<<endl;
}
void printvector_string(vector<string> &v)
{
    cout<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] <<" ";
    }
    cout<<endl<<endl;
}
int main()
{
    //for the interger
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    printvector(v);

    vector<int> v1(10);
    v1.push_back(10);
    printvector(v1);

    vector<int>v2=v;  //copy the v into v2 by value o(n)->time complexity
    printvector(v2);

//for the string
    vector<string>str;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        str.push_back(s);
    }

    printvector_string(str);



}