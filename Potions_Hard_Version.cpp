#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	long long sum = 0;

	priority_queue<int, vector<int>, greater<int>> pq;

	for ( int i = 0, x; i < n; i++ ) {
		cin >> x;
		sum += x;
		pq.push( x );
		while ( sum < 0 ) {
			sum -= pq.top();
			pq.pop();
		}
	}

	cout << pq.size() << "\n";

	return 0;
}