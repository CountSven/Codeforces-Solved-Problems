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
		int a[n];

		int g = 0;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			g = __gcd( g, a[i] );
		}

		int cnt = count( a, a+n, g );

		if ( cnt ) cout << n - cnt << "\n";
		else {
			set<int> st;

			for ( auto u : a ) st.insert( u );

			vector<int> dist(5001, 1e9);

			queue<int> q;

			for ( auto u : st ) {
				dist[u] = 0;
				q.push( u );
			}

			while ( q.size() ) {
				int v = q.front();
				q.pop();
				for ( auto u : st ) {
					int cur = __gcd( v, u );
					if ( dist[cur] > dist[v] + 1 ) {
						dist[cur] = dist[v] + 1;
						q.push( cur );
					}
				}
			}

			cout << dist[g] + n - 1 << "\n";
		}
	}

	return 0;
}