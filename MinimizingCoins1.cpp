#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 0;

// int dp[1000] = { -1};

// int change1(int *coins, int x, int size)
// {
// 	//Base Case

// 	if (x == 0)
// 	{
// 		return 1;
// 	}

// 	if (dp[x] != -1)
// 	{
// 		return dp[x];
// 	}

// 	int ans = INT_MAX;
// 	for (int i = 0; i < size; i++)
// 	{
// 		if (x - coins[i] >= 0)
// 		{
// 			int sub = change1(coins, x - coins[i], size);
// 			ans = min(ans, sub);
// 		}
// 		dp[x] = ans;
// 	}

// 	return dp[x];
// }

int change2(vector<int>& coins, int x, int *dp)
{
	if (x == 0)
	{
		return 0;
	}

	if (dp[x] != -1)
	{
		return dp[x];
	}

	int ans = INT_MAX;
	for (int i = 0; i < coins.size(); i++)
	{
		if (x - coins[i] >= 0)
		{
			int sub = change2(coins, x - coins[i], dp);
			ans = min(sub, ans) + 1;
		}
		dp[x] = ans;
	}
	return dp[x];
}
int main()
{
	int n, x;
	cin >> n >> x;

	vector<int> coins(n);
	for (int i = 0; i < n; i++)
	{
		cin >> coins[i];
	}

	// vector<int> dp(n + 1);
	int dp[n + 1];
	memset(dp, -1, n + 1);
	cout << change2(coins, x, dp);
	return 0;
}