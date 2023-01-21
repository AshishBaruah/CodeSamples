#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
	ll n;
	cin >> n;

	vector<int> x;

	if (n == 3)
	{
		cout << "NO\n";
		return;
	}
	else if (n % 2 == 0)
	{
		cout << "YES\n";
		for (int i = 0; i < n / 2; i++)
		{
			x.push_back(1);
			x.push_back(-1);
		}
		for (auto&y : x)
		{
			cout << y << " ";
		}
		cout << endl;
		return;
	}
	else
	{
		cout << "YES\n";
		ll rem  = n / 2;
		for (int i = 0; i < rem; i++)
		{
			x.push_back(1 - rem);
			x.push_back(rem);
		}
		x.push_back(1 - rem);
		for (auto&y : x)
		{
			cout << y << " ";
		}
		cout << endl;
		return;
	}

}

int main()
{
	ll t;
	cin >> t;

	while (t--)
	{
		solve();
	}
}