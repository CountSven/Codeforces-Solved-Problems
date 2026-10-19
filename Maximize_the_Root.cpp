#include<bits/stdc++.h>
using namespace std;

const int N = 2e5+8;

vector<int> a(N), adj[N];

int dfs( int v, int p )
{
	int mn = 2e9;

	for ( auto u : adj[v] ) {
		if ( u != p ) mn = min( mn, dfs( u, v ) );
	}

	if ( mn == 2e9 ) return a[v];

	if ( v == 1 ) return a[1] + mn;

	if ( a[v] >= mn ) return mn;
	else return ( a[v] + mn ) / 2;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n;
		cin >> n;

		for ( int i = 1; i <= n; i++ ) {
			cin >> a[i];
			adj[i].clear();
		}

		for ( int u = 2, v; u <= n; u++ ) {
			cin >> v;
			adj[u].push_back( v );
			adj[v].push_back( u );
		}

		cout << dfs( 1, 0 ) << "\n";
	} 

	return 0;
}