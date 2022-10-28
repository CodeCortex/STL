// input format
// first line N->number os students
// followed by string and integer
// it will print in the decreasing order of marks and if same marks then lexicographical manner

#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "enter the number of students" << endl;
    int n;
    cin >> n;
    // map<int, set<string>> marks_map;   //this will give partial right answer. suppose there is two same name and same marks then ?
    map<int,multiset<string>>marks_map;
    for (int i = 0; i < n; i++)
    {
        int marks;
        string name;
        cin >> name >> marks;
        marks_map[marks].insert(name);
    }
    auto curr_it = --marks_map.end(); // pointing to the last element

    while (true)
    {
        auto students = curr_it->second;
        // auto student =(*curr_it).second;   //both are same up
        int marks = (*curr_it).first;

        for(auto student: students){       //not working in my laptop but works in online compiler
            cout<<student<<" "<<marks<<endl;
        }
        
        if(curr_it==marks_map.begin()) break;
        curr_it--;
    }
    return 0;
}

