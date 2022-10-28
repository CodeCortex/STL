#include <bits/stdc++.h>
using namespace std;

int main()
{

stack<int> s;
s.push(1);
s.push(2);
s.push(3);
s.push(4);
while(!s.empty()){
    cout<<s.top()<<endl;
    s.pop();
}

cout<<endl<<endl;

//running in the online compiler but not in my laptop
stack<string>str;
str.push("abc");
str.push("bcs");
str.push("btech");
while(!str.empty()){
    cout<<str.top()<<endl;
    str.pop();
}



return 0;
}
