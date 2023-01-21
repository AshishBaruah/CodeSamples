#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 0;

int helper(int i, int j, vector<vector<int>>&dp, vector<vector<int>>&a)
{
	if (i >= 0 && j >= 0 && a[i][j] == -1)
	{
		return 0;
	}
	if (i == 0 && j == 0)
	{
		return 1;
	}

	if (i < 0 || j < 0)
	{
		return 0;
	}

	int up = helper(i - 1, j, dp, a);
	int left = helper(i, j - 1, dp, a);

	return up + left;
}
int main()
{

	ll t;
	cin >> t;

	while (t--)
	{
		int m, n;
		cin >> m >> n;

		vector<vector<int>> a(m, vector<int>(n));

		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> a[i][j];
			}
		}
		vector<vector<int>> dp(m, vector<int>(n, -1));
		cout << helper(m - 1, n - 1, dp, a);
	}
	return 0;
}