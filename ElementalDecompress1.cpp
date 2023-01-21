#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 0;

void helper()
{
	int n;
	cin >> n;
	int i, j;
	vector<pair<int, int>> v(n);
	set<int> p, q;
	vector<int> ans1(n), ans2(n);
	for (i = 0; i < n; i++)
	{
		cin >> v[i].first;
		v[i].second = i;
		p.insert(i + 1);
		q.insert(i + 1);
	}
	sort(v.begin(), v.end());
	int x = 0;
	// for (int x = 0; x < n; x++)
	while (x < n)
	{
		j = v[x].second;
		if (p.count(v[x].first))
		{
			auto itr = q.lower_bound(v[x].first);
			if (itr != q.begin())
			{
				itr--;
				ans1[j] = v[x].first;
				ans2[j] = *itr;
				q.erase(itr);
				p.erase(v[x].first);
				x++;
				continue;
			}
			else if (*itr == v[x].first)
			{
				ans1[j] = v[x].first;
				ans2[j] = *itr;
				q.erase(itr);
				p.erase(v[x].first);
				x++;
				continue;
			}
		}
		if (q.count(v[x].first))
		{
			auto itr = p.lower_bound(v[x].first);
			if (itr != p.begin())
			{
				itr--;
				ans2[j] = v[x].first;
				ans1[j] = *itr;
				p.erase(itr);
				q.erase(v[x].first);
				x++;
				continue;
			}
			else if (*itr == v[x].first)
			{
				ans2[j] = v[x].first;
				ans1[j] = *itr;
				p.erase(itr);
				q.erase(v[x].first);
				x++;
				continue;
			}
		}
		// x++;
		cout << "NO" << endl;
		return;
	}
	cout << "Yes" << endl;
	for (i = 0; i < n; i++)
	{
		cout << ans1[i] << " ";
	}
	cout << "\n";
	for (i = 0; i < n; i++)
	{
		cout << ans2[i] << " ";
	}
	cout << endl;
}
int main()
{

	ll t;
	cin >> t;
	while (t--)
	{
		helper();
	}
	return 0;
}