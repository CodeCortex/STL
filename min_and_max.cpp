#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[5] = {5, 1, 2, 8, 4};
    int min = *min_element(arr, arr + 5);
    cout << min << endl;
    int max = *max_element(arr, arr + 5);
    cout << max << endl;
    int cnt = count(arr, arr + 5, 8);  //this will provide the number of presence in the arr of 8
    cout << cnt << endl;
    reverse(arr, arr + 5);
    for (auto val : arr)
    {
        cout << val << " ";
    }
    cout << endl;

    cout << "********************" << endl;
    vector<float> v = {5, 1, 2, 8, 4};
    int vec_min = *min_element(v.begin(), v.end());
    cout << vec_min << endl;
    int vec_max = *max_element(v.begin(), v.end());
    cout << vec_max << endl;
    reverse(v.begin(), v.end());
    for (auto value : v)
    {
        cout << value << " ";
    }
    cout << endl;
    cout << "********************" << endl;
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << sum << endl;

    return 0;
}