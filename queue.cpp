#include <bits/stdc++.h>
using namespace std;

int main()
{

//not run in my laptop but fine in online compiler
queue<string> str;
str.push("abc");
str.push("btech");
str.push("cse");
while(!str.empty()){
    cout<<str.front()<<endl;
    str.pop();
}


return 0;
}