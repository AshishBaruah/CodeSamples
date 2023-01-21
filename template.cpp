#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 0;
//	coin change 2 Recursive solution
int helper(int amount, vector<int>& coins, int n)
{
	//Base Case
	if (amount == 0)
	{
		return 1;
	}

	if (n == 0)
	{
		return 0;
	}

	if (coins[n - 1] > amount)
	{
		return helper(amount, coins, n - 1);
	}
	return helper(amount - coins[n - 1], coins, n) + helper(amount, coins, n - 1);

}
int main()
{

	// ll t;
	// cin >> t;

	int amount;
	cin >> amount;

	vector<int> coins{1, 2, 5};
	int n = coins.size();

	int ans;


	if (n == 0)
	{
		ans = 0;
	}
	else
	{
		ans = helper(amount, coins, n);
	}
	cout << ans;
	return 0;
}