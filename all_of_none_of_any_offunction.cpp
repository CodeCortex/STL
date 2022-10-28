//all_off funciton
#include <bits/stdc++.h>
using namespace std;

int main()
{

vector<int>v={4,5,6,-1};
//check whether all are positive or not
//1 for all positve, 0 for negative
cout<<all_of(v.begin(),v.end(),[](int x){return x>0;});  //for positve
cout<<"\n*************"<<endl;
cout<<all_of(v.begin(),v.end(),[](int x){return x<0;});  //for negative
cout<<"\n*************"<<endl;

cout<<any_of(v.begin(),v.end(),[](int x){return x>0;});  //for positve
cout<<"\n*************"<<endl;
cout<<any_of(v.begin(),v.end(),[](int x){return x<0;});  //for negative
cout<<"\n*************"<<endl;


cout<<none_of(v.begin(),v.end(),[](int x){return x>0;});  //for positve
cout<<"\n*************"<<endl;
cout<<none_of(v.begin(),v.end(),[](int x){return x<0;});  //for negative
cout<<"\n*************"<<endl;
return 0;
}