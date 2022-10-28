#include <bits/stdc++.h>
using namespace std;

int main()
{
    // here int x is the input and x+2 is the return value and (2) is the argument
    cout << [](int x){ return x + 2; }(2);
    cout << "\n**********************" << endl;
    // here sum is the function
    auto sum = [](int x, int y){ return x + y; };
    cout << sum(4, 11) << endl;
    cout << sum(5, 5) << endl;
    cout << "\n**********************" << endl;

    return 0;
}