#include<iostream>
#include<vector>
using namespace std;

#define ll long long
const int N = 0;

struct Activity {
	int A, B, C;
};

int helper(vector<Activity> points, int n)
{
	int dp[n + 1][3];

	dp[1][0] = points[1].A;
	dp[1][1] = points[1].B;
	dp[1][2] = points[1].C;

	for (int i = 2; i <= n; i++)
	{
		dp[i][0] = points[i].A + max(points[i - 1][1], points[i - 1][2]);
		dp[i][1] = points[i].B + max(points[i - 1][0], points[i - 1][2]);
		dp[i][2] = points[i].C + max(points[i - 1][0], points[i - 1][1]);
	}
	return max(dp[n][0], max(dp[n][1], dp[n][2]));
}
int main()
{
	int n;
	cin >> n;
	vector<Activity> points(n + 1);

	for (int i = 1; i <= n; i++)
	{
		cin >> points[i].A;
		cin >> points[i].B;
		cin >> points[i].C;
	}

	for (auto &x : points)
	{
		cout << x << " ";
	}
	cout << endl;
	// cout << helper(points, n);
	return 0;
}