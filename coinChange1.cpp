#include<bits/stdc++.h>
using namespace std;

int pos = 0;
vector<int> dp(1000, 0);
int helper(int amount, vector<int>& coins)
{
	//	Base Case
	if (amount == 0)
	{
		return 0;
	}

	if (dp[amount] != 0)
	{
		return dp[amount];
	}

	int ans = INT_MAX;
	for (int i = 0; i < coins.size(); i++)
	{
		if (amount - coins[i] >= 0)
		{
			int subProb = helper(amount - coins[i], coins);
			ans = min(ans, subProb) + 1;
			pos++;
		}
		dp[amount] = ans;
	}

	return dp[amount];
}
int main()
{
	int amount;
	cin >> amount;

	vector<int> coins{1, 2, 5};

	int ans = helper(amount, coins);
	cout << ans << endl;
	cout << pos;
	return 0;
}