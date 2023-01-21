#include<bits/stdc++.h>
using namespace std;

#define ll long long
void solve(int n, string& s)
{
	ll numL = count(s.begin(), s.end(), 'L');
	ll numR = count(s.begin(), s.end(), 'R');

	if (numR == 0 or numR == n)
	{
		cout << -1 << endl;
		return;
	}

	int countLR = 0;
	int countRL = 0;
	for (int i = 0; i < n; i++)
	{
		if (s.substr(i, 2) == "RL")
		{
			countRL++;
			// cout << "0\n";
			// return 0;
		}
		if (s.substr(i, 2) == "LR")
		{
			// cout << i + 1 << "\n";
			// return i + 1;
			countLR++;
		}
	}

	if (numL > numR)
	{
		cout << countLR * 2 << endl;
		return;
	}
	else if (numR > numL)
	{
		cout << countRL * 3 << endl;
		return;
	}
	else
	{
		cout << 0 << endl;
		return;
	}
	// cout << numL << " " << numR << endl;
	// cout << countLR << " " << countRL << endl;
	// cout << "-1\n";
	// return -1;
}

void solve2(int n, string s)
{
	for (int i = 0; i < n; i++)
	{
		string sub = s.substr(i, 2);
		if (sub == "RL")
		{
			cout << "0\n";
			return;
		}
		if (sub == "LR")
		{
			cout << i + 1 << endl;
			return;
		}
	}

	cout << "-1\n";
	return;
}
int main()
{
	ll t;
	cin >> t;

	while (t--)
	{
		ll n;
		cin >> n;
		string s;
		cin >> s;

		solve2(n, s);
		// ll ans = solve(n, s);
		// cout << ans << endl;
	}
	return 0;
}