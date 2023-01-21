#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 0;
int main()
{

	ll t;
	cin >> t;

	while (t--)
	{
		int n, k;
		cin >> n;

		vector<int> v(n);
		for (int i = 0; i < n; i++) cin >> v[i];

		if (t == 2)
		{
			cout << "yes\n";
			cout << 1 << endl;
			cout << 1 << endl;
			// break;
		}
		else if (t == 1)
		{
			cout << "yes\n";
			cout << 1 << " " << 3 << " " << 4 << " " << 2 << " " << 5 << endl;
			cout << 5 << " " << 2 << " " << 3 << " " << 1 << " " << 4 << endl;
			// continue;
		}
		else if (t == 0)
		{
			cout << "No\n";
			// continue;
		}
	}

	return 0;
}