#include<bits/stdc++.h>
using namespace std;

const int N = 1e5, MOD = 1e9+7;

vector<int> adj[N+1], vis( N+1, 0 );

int fexp( int a, int b )
{
	int res = 1;

	while ( b ) {
		if ( b % 2 ) res = ( res * 1LL * a ) % MOD;
		a = ( a * 1LL * a  ) % MOD;
		b /= 2;
	}

	return res;
}

int cnt = 0;

void dfs( int v )
{
	vis[v] = 1;
	cnt++;

	for ( auto u : adj[v] ) {
		if ( !vis[u] ) dfs( u );
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k;
	cin >> n >> k;

	for ( int i = 0; i < n-1; i++ ) {
		int u, v, x;
		cin >> u >> v >> x;
		if ( !x ) {
			adj[u].push_back( v );
			adj[v].push_back( u );
		}
	}

	int res = fexp( n, k );

	for ( int i = 1; i <= n; i++ ) {
		if ( !vis[i] ) {
			cnt = 0;
			dfs( i );
			res = ( res - fexp( cnt, k ) + MOD ) % MOD;
		}
	}

	cout << res << "\n";

	return 0;
}