#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n;
		cin >> n;
		vector<int> v(n);

		priority_queue<int> pq;

		long long cnt = 0;

		for ( int i = 0; i < n; i++ ) {
			cin >> v[i];
			if ( v[i] > 0 ) pq.push( v[i] );
			else {
				if ( pq.size() > 0 ) {
					cnt += pq.top();
					pq.pop();
				}
			}
		}

		cout << cnt << "\n";
	}

	return 0;
}