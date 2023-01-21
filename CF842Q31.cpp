#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 0;

void solve()
{
	int n;
	cin >> n;

	vector<pair<int, int>> v(n);
	set<int> p, q;
	vector<int> ans1(n), ans2(n);

	for (int i = 0; i < n; i++)
	{
		cin >> v[i].first;
		v[i].second = i;
		p.insert(i + 1);
		q.insert(i + 1);
	}

	sort(v.begin(), v.end());
}
int main()
{

	// ll t;
	// cin >> t;
	// while(t--)
	// {
	// 	solve();
	// }

	set<int> p;
	int n;
	cin >> n;
	p.insert(60);
	for (int i = 0; i < n; i++)
	{
		p.insert(i + 1);
	}
	p.insert(56);
	cout << endl;
	for (auto itr : p)
	{
		cout << itr << " ";
	}

	//	items are stored in sorted order in set

	cout << endl;
	auto it = p.lower_bound(3);

	cout << *it << endl;
	return 0;
}