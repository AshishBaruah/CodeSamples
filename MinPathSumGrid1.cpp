#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 0;

int helper(int i, int j, vector<vector<int>>&dp, vector<vector<int>>&a)
{
	if (i == 0 && j == 0)
	{
		return a[i][j];
	}

	if (i < 0 || j < 0)
	{
		return 1e9;
	}

	int up = a[i][j] + helper(i - 1, j, dp, a);
	int left = a[i][j] + helper(i, j - 1, dp, a);

	return min(up, left);
}
int main()
{

	ll t;
	cin >> t;

	while (t--)
	{
		int m, n;
		cin >> m >> n;

		vector<vector<int>> a(m, vector<int>(m));
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> a[i][j];
			}
		}

		vector<vector<int>> dp(m, vector<int>(m, -1));

		cout << helper(m - 1, n - 1, dp, a);
	}
	return 0;
}