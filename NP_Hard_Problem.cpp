#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;

vector<int> adj[N+1], vis(N+1), col(N+1);
int f = 0;

void dfs( int v )
{
	vis[v] = 1;
	for ( auto u : adj[v] ) {
		if ( !vis[u] ) {
			col[u] = col[v] ^ 1;
			dfs( u );
		}
		else {
			if ( col[u] == col[v] ) {
				f = 1;
				break;
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	while ( m-- ) {
		int u, v;
		cin >> u >> v;
		adj[u].push_back( v );
		adj[v].push_back( u );
	}

	for ( int i = 1; i <= n; i++ ) {
		if ( !vis[i] ) dfs( i );
	}

	if ( f ) cout << -1 << "\n";
	else {
		vector<int> v, vv;

		for ( int i = 1; i <= n; i++ ) {
			if ( col[i] ) v.push_back( i );
			else vv.push_back( i );
		}

		cout << v.size() << "\n";
		for ( auto u : v ) cout << u << " ";
		cout << "\n";
		cout << vv.size() << "\n";
		for ( auto u : vv ) cout << u << " ";
		cout << "\n";
	}

	return 0;
}