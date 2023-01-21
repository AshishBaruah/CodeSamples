#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 0;
int f(int day, int last, vector<vector<int>>&points, vector<vector<int>>&dp)
{
	if (dp[day][last] != -1)	return dp[day][last];

	//	base case
	if (day == 0)
	{
		int maxi = 0;
		for (int i = 0; i <= 2; i++)
		{
			if (i != last)
			{
				maxi = max(maxi, points[0][i]);
			}
			return dp[day][last] = maxi;
		}
	}

	int maxi = 0;
	for (int i = 0; i <= 2; i++)
	{
		if (i != last) {
			int act = points[day][i] + f(day - 1, i, points, dp);
			maxi = max(act, maxi);
		}
	}

	return dp[day][last] = maxi;


}
int helper(int n, vector<vector<int>>& points)
{
	vector<vector<int>> dp(n, vector<int> (4, -1));
	return f(n - 1, 3, points, dp);
}

int main()
{
	vector<vector<int>> points = {
		{10, 40, 70},
		{20, 50, 80},
		{30, 60, 90}
	};

	int n = points.size();
	cout << helper(n, points);
	return 0;
}