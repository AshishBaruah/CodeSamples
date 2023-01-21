#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 0;
int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;

		vector<int> nums(n);
		for (auto&x : nums)	cin >> x;

		bool check = false;

		for (int i = 0; i < n - 1; i++)
		{
			if (nums[i] != nums[i + 1])
			{
				check = true;
				break;
			}
		}

		vector<int> ans(n);
		if (!check)
		{
			cout << "no\n";
		}
		else
		{
			// cout << "yes\n";
			// int low = 0;
			// int high = n - 1;
			// while (low < high)
			// {
			// 	cout << nums[low] << " ";
			// 	cout << nums[high] << " ";
			// 	low++;
			// 	high--;
			// }
			// if (n % 2 != 0)
			// {
			// 	cout << nums[low] << " ";
			// }
			// cout << "\n";

			cout << "yes\n";
			int l = 0;
			int r = n - 1;
			int i = 0;
			int j = 1;
			while (l < r)
			{
				ans[i] = nums[l];
				ans[j] = nums[r];
				l++;
				r--;
				i = i + 2;
				j = j + 2;
			}
			if (n % 2 != 0)
			{
				ans[i] = nums[l];
			}

			for (auto&x : ans)
			{
				cout << x << " ";
			}
			cout << endl;
		}
	}
	return 0;
}