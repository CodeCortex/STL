#include <bits/stdc++.h>

using namespace std;

void printvec(vector<vector<int>> &v)
{
	for (int i = 0; i < v.size(); i++)
	{
		for (int j = 0; j < v.size(); j++)
		{
			cout << v[i][j];
		}
		cout << endl;
	}
}

int diagonalDifference(vector<vector<int>> arr)
{
	int n = arr.size();
	int dig1 = 0;
	int dig2 = 0;
	int nn = n;
	for (int i = 0; i < n; i++)
	{
		nn--;
		for (int j = 0; j < n; j++)
		{
			if (i == j)
			{
				dig1 += arr[i][j];
			}
		}
		dig2 += arr[i][nn];
	}

	int diff = abs(dig1 - dig2);
	return diff;
}

int main()
{
	vector<vector<int>> v{

		{11, 2, 4},
		{4, 5, 6},
		{10, 8, -12},

	};

	printvec(v);
	cout << diagonalDifference(v) << endl;
	// cout<<"*******"<<endl;
	cout << v.size() << endl;
}
