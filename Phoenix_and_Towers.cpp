#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, m, x;
		cin >> n >> m >> x;
		vector<pair<int, int>> v(n);

		for ( int i = 0; i < n; i++ ) {
			cin >> v[i].first;
			v[i].second = i;
		}

		sort( v.rbegin(), v.rend() );

		priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

		for ( int i = 0; i < m; i++ ) pq.push( { 0, i } );

		vector<int> res(n);

		for ( int i = 0; i < n; i++ ) {
			auto [val, idx] = pq.top();
			pq.pop();

			val += v[i].first;
			res[v[i].second] = idx;

			pq.push( { val, idx } );
		}

		int mn = 1e9, mx = 0;

		while ( !pq.empty() ) {
			auto [val, idx] = pq.top();
			mn = min( mn, val );
			mx = max( mx, val );
			pq.pop();
		}

		if ( mx - mn > x ) cout << "NO" << "\n";
		else {
			cout << "YES" << "\n";
			for ( auto u : res ) cout << u + 1 << " ";
			cout << "\n";
		}
	}

	return 0;
}