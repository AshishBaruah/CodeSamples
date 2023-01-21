#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
	ll n;
	cin >> n;

	vector<int> x(n);

	if (n == 2)
	{
		x[0] = 9;
		x[1] = 5;
		int sum = accumulate(x.begin(), x.end(), 0);
		if (x[0] + x[1] == sum)
		{
			cout << "YES\n";
			cout << x[0] << " " << x[1];
			cout << endl;
			return;
		}
	}

	if (n == 3)
	{
		cout << "NO\n";
		return;
	}

	ll start = 1;
	ll start2 = -1;
	if (n % 2 == 0)
	{
		for (int i = 0; i < n; i++)
		{
			if (i % 2 == 0)
			{
				x[i] = start;
				// start++;
			}
			else
			{
				x[i] = start2;
				// start2--;
			}
		}
	}

	int s2;
	bool check = false;
	// s2 = accumulate(x.begin(), x.end(), 0);
	// cout << s2 << endl;
	for (int i = 0; i < n; i++)
	{
		cout << x[i] << " ";
	}
	cout << endl;
}
int main()
{
	ll t;
	cin >> t;

	while (t--)
	{
		solve();
	}
	return 0;
}