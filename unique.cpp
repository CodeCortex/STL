#include <bits/stdc++.h>
using namespace std;
#define max 100


int main()
{

vector<int>v={1,1,1,3,4,2,2};
vector<int>::iterator it;
it= unique(v.begin(),v.end());
// auto it= unique(v.begin(),v.end());
v.resize(distance(v.begin(),it));
for(int i=0;i<v.size();i++){
// cout<<v[i];
cout<<it[i];
}

return 0;
}