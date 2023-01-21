#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 0;
void solve()
{
	ll n, k;
	cin >> n >> k;

	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	ll diff = 0;
	ll firstOneOccurence = 1;

	for (int i = 0; i < n; i++)
	{
		if (v[i] == firstOneOccurence)
		{
			diff++;
			firstOneOccurence++;
		}
	}

	ll ans = n - diff;

	if (ans % firstOneOccurence == 0)
	{
		cout << ans / firstOneOccurence << "\n";
	}
	else
	{
		cout << (ans / firstOneOccurence) + 1 << "\n";
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
	return 0;
}