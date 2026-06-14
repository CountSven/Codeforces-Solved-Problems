#include<bits/stdc++.h>
using namespace std;

vector<int> parent, sz, vis;

int FIND( int v )
{
	if ( v == parent[v] ) return v;
	else return parent[v] = FIND( parent[v] );
}

void UNITE( int a, int b )
{
	a = FIND( a );
	b = FIND( b );

	if ( a != b ) {
		if ( sz[a] < sz[b] ) swap( a, b );
		parent[b] = a;
		sz[a] += sz[b];
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	parent.resize( n+1 );
	sz.resize( n+1, 1 );
	vis.resize( n+1, 0 );

	for ( int i = 1; i <= n; i++ ) parent[i] = i;

	while ( m-- ) {
		int k;
		cin >> k;
		vector<int> v(k);

		for ( int i = 0; i < k; i++ ) cin >> v[i];

		for ( int i = 1; i < k; i++ ) {
			if ( FIND( v[i] ) != FIND( v[i-1] ) ) UNITE( v[i], v[i-1] );
		}
	}

	// for ( int i = 1; i <= n; i++ ) cout << parent[i] << " ";
	// cout << "\n";

	map<int, vector<int>> mp;

	for ( int i = 1; i <= n; i++ ) mp[FIND( i )].push_back( i );

	vector<int> res( n+1 );

	for ( auto [x, y] : mp ) {
		// cout << x << " -> ";
		// for ( auto u : y ) cout << u << " ";
		// cout << "\n";
		int cnt = (int)y.size();
		for ( auto u : y ) res[u] = cnt;
	}

	for ( int i = 1; i <= n; i++ ) cout << res[i] << " ";
	cout << "\n";

	return 0;
}