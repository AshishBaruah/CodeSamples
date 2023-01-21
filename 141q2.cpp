#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 0;

void helper()
{
	int n;
	cin >> n;

	if (n == 2)
	{
		cout << "1 3" << endl;
		cout << "4 2" << endl;
		return;
	}
	int a[n * n];


	for (int i = 0; i < n * n; i++)
	{
		a[i] = (i + 1);
	}

	// for (auto&x : a)
	// {
	// 	cout << x << " ";
	// }

	int x[n][n];


	bool check = true;
	int l = 0;
	int r = n * n - 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (check)
			{
				x[i][j] = a[l];
				l++;
				check = false;
			}
			else
			{
				x[i][j] = a[r];
				r--;
				check  = true;
			}
		}
	}

	if (n % 2 == 0)
	{
		vector<vector<int>> t;

		for (int i = 0; i < n; i++)
		{
			vector<int> res;
			for (int j = 0; j < n; j++)
			{
				res.push_back(x[i][j]);
			}
			t.push_back(res);
		}

		for (int i = 1; i < n; i += 2)
		{
			reverse(t[i].begin(), t[i].end());
		}
		for (auto&x : t)
		{
			for (auto&y : x)
			{
				cout << y << " ";
			}
			cout << endl;
		}
		return;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << x[i][j] << " ";
		}
		cout << endl;
	}
}
int main()
{

	ll t;
	cin >> t;

	while (t--)
	{
		helper();
	}
	return 0;
}