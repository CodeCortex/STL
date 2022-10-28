#include <bits/stdc++.h>
using namespace std;

unordered_map<char, int> symbol = {{'(', -1}, {'{', -2}, {'[', -3}, {')', 1}, {'}', 2}, {']', 3}};
string check(string s)
{
    stack<char> temp;
    for (char bracket : s)
    {
        if (symbol[bracket] < 0)
        { // opening brackets
            temp.push(bracket);
        }
        else
        {
            if (temp.empty())
                return "no";

            char top = temp.top();
            temp.pop();
            if (symbol[top] + symbol[bracket] != 0)
            {
                return "no";
            }
        }
    }
    if (temp.empty())
        return "yes";
    return "no";
}
int main()
{
    cout << "enter the number of string you want to check : " << endl;
    int n;
    cin >> n;
    while (n--)
    {
        cout << "Enter the " << n << " string" << endl;
        string s;
        cin >> s;
        cout << check(s) << endl;
    }

    return 0;
}