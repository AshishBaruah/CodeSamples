#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 0;
int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;

		int a[n * n];

		for (int i = 0; i < n * n; i++)
		{
			a[i] = i + 1;
		}

		int ans1[n][n];
		int l = 0;
		int r = n * n - 1;
		vector<vector<int>> ans;
		bool check = true;
		for (int i = 0; i < n; i++)
		{
			vector<int> n1;
			for (int j = 0; j < n; j++)
			{
				if (check)
				{
					n1.push_back(a[l]);
					l++;
					check = false;
				}
				else
				{
					n1.push_back(a[r]);
					r--;
					check = true;
				}
			}
			ans.push_back(n1);
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << ans[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;

		if (n % 2 == 0)
		{
			for (int i = 1; i < n; i += 2)
			{
				reverse(ans[i].begin(), ans[i].end());
			}
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << ans[i][j] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}