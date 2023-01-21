#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
	ll n;
	cin >> n;

	vector<int> num(n);

	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
	}

	unordered_map<int, int> mp1;

	for (int i = 0; i < n; i++)
	{
		mp1[num[i]]++;
	}

	ll ele;
	for (auto &x : mp1)
	{
		if (x.second == 1)
		{
			ele = x.first;
		}
	}

	int index;
	for (int i = 0; i < n; i++)
	{
		if (num[i] == ele)
		{
			index = i ;
		}
	}

	cout << index + 1 << endl;
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