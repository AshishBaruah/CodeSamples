#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
	ll t;
	cin >> t;


	while (t--)
	{
		ll n, m;
		cin >> n >> m;

		vector<int> num(n);
		for (int i = 0; i < n; i++)
		{
			cin >> num[i];
		}

		vector<int> p_s(n);
		ll sum1 = 0;
		for (int i = 0; i < n; i++)
		{
			sum1 += num[i];
			p_s[i] = sum1;
		}

		// Calculating prefix Sum array
		// for (auto&x : p_s)
		// {
		// 	cout << x << " ";
		// }
		// cout << endl;

		int op = 0;
		int sum = 0;

		priority_queue<int, vector<int>, greater<int>> pq;
		for (int i = m; i < n; i++)
		{
			if (num[i] < 0) {
				pq.push(num[i]);
			}
			sum += num[i];
			while (sum < 0)
			{
				int x = pq.top();
				pq.pop();
				x = -1 * x;
				sum += (2 * x);
				op++;
			}
			if (num[m - 1] <= 0) {
				sum = num[m - 1];
			}
			else if (m != -1) {
				sum = -1 * num[m - 1];
			}
			op++;
		}

		priority_queue<int> pp;
		for (int i = m - 2; i >= 1; i--)
		{
			if (num[i] > 0)
			{
				pp.push(num[i]);
			}
			sum += num[i];

			while (sum > 0)
			{
				int x = pp.top();
				pp.top();
				x = -1 * x;
				sum += (2 * x);
				op++;
			}
		}
		cout << op << endl;
	}
	return 0;
}

/*
int op=0;
int sum=0;

priority_queue<int,vector<int>,greater<int>> pq;
for(int i=m;i<n;i++)
{
	if(num[i]<0){
		pq.push(a[i]);
	}
	sum+=num[i];
	while(sum<0)
	{
		int x=pq.top();
		pq.pop();
		x = -1*x;
		sum+=(2*x);
		op++;
	}
	if(num[m-1]<=0){
		sum=a[m-1];
	}
	else if(m!=-1){
		sum=-1*num[m-1];
	}
	op++;
}

priority_queue<int> pp;
for(int i=m-2;i>=1;i--)
{
	if(num[i]>0){
		pp.push(num[i]);
	}
	sum+=num[i];

	while(sum>0)
	{
		int x = pp.top();
		pp.top();
		x = -1*x;
		sum+=(2*x);
		op++;
	}
}
cout<<op<<endl;
*/