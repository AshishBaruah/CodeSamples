#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
	ll n;
	cin >> n;

	vector<int> x(n);
	//three cases
	//	n=3,n is even,n is odd
	//	n is 3
	if (n == 3)
	{
		cout << "NO\n";
		return;
	}

	//	n is odd
	if ((n & 1))
	{
		int y = -(n / 2);
		int z = (n / 2) - 1;
		cout << "YES\n";
		for (int i = 0; i < n - 1; i++)
		{
			x.push_back(z);
			x.push_back(y);
		}
		x.push_back(z);
	}

	if (n % 2 == 0)
	{
		cout << "YES\n";
		for (int i = 0; i < n; i++)
		{
			x.push_back(1);
			x.push_back(-1);
		}
	}

	for (auto&re : x)
	{
		cout << re << " ";
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