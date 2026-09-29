#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	map<pair<int, int>, int> mp, idx;

	vector<int> adj[n];

	for ( int i = 0, u, v; i < n-1; i++ ) {
		cin >> u >> v;
		u--, v--;
		if ( u > v ) swap( u, v );
		mp[{ u, v }] = -1;
		idx[{ u, v }] = i;
		adj[u].push_back( v );
		adj[v].push_back( u );
	}

	vector<pair<int, int>> cnt;

	for ( int i = 0; i < n; i++ ) {
		cnt.push_back( { (int)adj[i].size(), i } );
	}

	sort( cnt.rbegin(), cnt.rend() );

	// for ( auto [x, y] : cnt ) cout << x << " " << y << "\n";

	int cur = 0;

	for ( auto [x, y] : cnt ) {
		for ( int u : adj[y] ) {
			int a = u, b = y;
			if ( a > b ) swap( a, b );
			if ( mp[{ a, b }] == -1 ) {
				mp[{ a, b }] = cur++;
			}
		}
	}

	// for ( auto [x, y] : mp ) {
	// 	auto[a, b] = x;
	// 	cout << a << " " << b << " -> " << y << "\n";
	// }

	vector<int> res(n-1);

	for ( auto [x, y] : idx ) {
		auto[a, b] = x;
		res[idx[{ a, b }]] = mp[{ a, b }];
	}

	for ( auto u : res ) cout << u << "\n";

	return 0;
}