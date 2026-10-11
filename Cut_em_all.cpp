#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
vector<int> adj[N+1], sz(N+1);

void dfs( int v, int p ) 
{
	sz[v] = 1;
	for ( auto u : adj[v] ) {
		if ( u != p ) {
			dfs( u, v );
			sz[v] += sz[u];
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for ( int i = 0, u, v; i < n-1; i++ ) {
		cin >> u >> v;
		adj[u].push_back( v );
		adj[v].push_back( u );
	}

	if ( n % 2 ) cout << -1 << "\n";
	else {
		dfs( 1, 0 );

		int res = 0;

		for ( int i = 1; i <= n; i++ ) {
			if ( sz[i] % 2 ) continue;
			res++;
		}

		cout << res - 1 << "\n";
	}

	return 0;
}