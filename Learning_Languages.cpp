#include<bits/stdc++.h>
using namespace std;

vector<int> adj[500];
vector<int> vis( 500, 0 );

void dfs( int u )
{
	vis[u] = 1;

	for ( int v : adj[u] ) {
		if ( !vis[v] ) dfs( v );
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	int f = 0;

	for ( int i = 1; i <= n; i++ ) {
		int k;
		cin >> k;

		if ( k ) f = 1;

		for ( int j = 0, x; j < k; j++ ) {
			cin >> x;
			adj[i].push_back( x + n );
			adj[x + n].push_back( i );
		}
	}

	int cnt = 0;

	for ( int i = 1; i <= n; i++ ) {
		if ( !vis[i] ) {
			cnt++;
			dfs( i );
		}
	}

	if ( !f ) cout << n << "\n";
	else cout << cnt - 1 << "\n";

	return 0;
}