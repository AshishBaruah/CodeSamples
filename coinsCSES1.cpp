#include<bits/stdc++.h>
using namespace std;

#define ll long long

// vector<int> dp(1000, -1);
int dp[1000] = { -1};
const int N = 0;

int helper(vector<int>& coins, int x)
{
	//Base case
	if (x == 0)
	{
		return 0;
	}

	//Look up
	if (dp[x] != -1)
	{
		return dp[x];
	}

	int ans = INT_MAX;
	for (int i = 0; i < coins.size(); i++)
	{
		// dp[i]=INT_MAX;
		if (x - coins[i] >= 0)
		{
			int subProb = helper(coins, x - coins[i]);
			ans = min(ans, subProb + 1);
		}
		dp[x] = ans;
	}

	return dp[x];
}
int main()
{
	ll n, x;
	cin >> n >> x;

	vector<int> coins;
	for (int i = 0; i < n; i++)
	{
		cin >> coins[i];
	}

	cout << helper(coins, x);
	// cout << ans;
	return 0;
}