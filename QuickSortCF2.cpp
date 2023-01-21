#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 0;
void helper()
{
	ll n, k;
	cin >> n >> k;

	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	vector<int> ans;
	int i = 0;
	for (i = 0; i < n; i++)
	{
		if (arr[i] == 1) {
			ans.push_back(1);
			break;
		}
	}

	int j = 0;

	while (i < n)
	{
		if (ans[j] + 1 == arr[i])
		{
			ans.push_back(arr[i]);
			j++;
		}
		i++;
	}


	int subAns = n - ans.size();

	if (subAns % k == 0)
	{
		cout << subAns / k << endl;
	}
	else
	{
		cout << subAns / k + 1 << endl;
	}
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