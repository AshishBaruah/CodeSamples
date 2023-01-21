#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 0;

int n;
int maxi;
int activity;
int helper(vector<vector<int>>& points, int day, int last)
{
	//	BAse CAse
	if (day == n)
	{
		maxi = 0;
		for (int i = 0; i <= 2; i++)
		{
			if (i != last)
			{
				maxi = max(maxi, points[0][i]);
			}
		}
		return maxi;
	}

	maxi = 0;
	for (int i = 0; i <= 2; i++)
	{
		if (i != last)
		{
			activity = points[day][i] + helper(points, day - 1, i);
			maxi = max(maxi, activity);
		}
	}

	return maxi;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		cin >> n;

		vector<vector<int>> points(n, vector<int>(3));

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cin >> points[i][j];
			}
		}

		cout << helper(points, n - 1, 3);
	}
	return 0;
}