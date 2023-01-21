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

		vector<int> a(n);
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}

		vector<int> preSum(n);
		int sum = 0;
		preSum[0] = 0;
		for (int i = 1; i < n; i++)
		{
			preSum[i] = sum + a[i];
		}

		// for (auto itr = a.begin() + 1; itr != a.end(); itr++)
		// {
		// 	sum = accumulate(a.begin() + 1, itr, 0);
		// 	preSum.push_back(sum);
		// }
		// sum = accumulate(a.begin() + 1, a.end(), 0);

		// cout << sum << endl;

		for (auto &x : preSum)
		{
			cout << x << " ";
		}
		cout << endl;
	}
	return 0;
}