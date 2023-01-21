#include<bits/stdc++.h>
using namespace std;

int main()
{
	//	This creates a Max Heap Priority Queue
	priority_queue<int> pq;
	pq.push(10);
	pq.push(40);
	pq.push(20);
	pq.push(15);

	// cout << pq.size() << endl;
	// cout << pq.top() << endl;

	// while (pq.empty() == false)
	// {
	// 	cout << pq.top() << " ";
	// 	pq.pop();
	// }


	//	This creates a MinHeap Priority Queue
	priority_queue<int, vector<int>, greater<int>> pp;
	pp.push(30);
	pp.push(20);
	pp.push(15);
	pp.push(40);
	pp.push(5);
	pp.push(45);

	cout << pp.size() << endl;
	cout << pp.top() << endl;

	while (pp.empty() == false)
	{
		cout << pp.top() << " ";
		pp.pop();
	}
	return 0;
}