#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 0;


int helper(int i, int j)
{
	//	Base Case
	if (i == 0 && j == 0)
	{
		return 1;
	}

	if (i < 0 || j < 0)
	{
		return 0;
	}

	int up, left;
	up = helper(i - 1, j);
	left = helper(i, j - 1);

	return up + left;
}

int helper2(int i, int j, vector<vector<int>>& dp)
{
	if (i == 0 && j == 0)
	{
		return 1;
	}

	if (i < 0 || j < 0)
	{
		return 0;
	}

	if (dp[i][j] != -1)
	{
		return dp[i][j];
	}

	dp[i][j] = helper2(i - 1, j, dp) + helper2(i, j - 1, dp);

	return dp[i][j];
}

int helper3(int m, int n, vector<vector<int>>&dp)
{
	dp[0][0] = 1;
	for (int i = 0; i < m ; i++)
	{
		for (int j = 0; j < n ; j++)
		{
			if (i == 0 && j == 0)
			{
				dp[i][j] = 1;
				continue;
			}

			int up = 0;
			int left = 0;

			if (i > 0)
			{
				up = dp[i - 1][j];
			}
			else if (j > 0)
			{
				left = dp[i][j - 1];
			}

			dp[i][j] = up + left;
		}
	}

	return dp[m - 1][n - 1];
}
int main()
{
	int m, n;
	cin >> m >> n;

	vector<vector<int>> dp(m, vector<int>(n, -1));
	// cout << helper(m - 1, n - 1);
	// cout << helper2(m - 1, n - 1, dp);
	cout << helper3(m, n , dp);
	return 0;
}