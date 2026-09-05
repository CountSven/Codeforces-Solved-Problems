#include<bits/stdc++.h>
using namespace std;

const int N = 2e5;

vector<int> adj[N+1];
vector<int> vis( N+1, 0 );
int f = 0;

void dfs( int v )
{
	vis[v] = 1;
	if ( adj[v].size() != 2 ) f = 1;
	for ( int u : adj[v] ) {
		if ( !vis[u] ) dfs( u ); 
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	set<int> good, bad;

	while ( m-- ) {
		int u, v;
		cin >> u >> v;
		adj[u].push_back( v );
		adj[v].push_back( u );
	}

	int cnt = 0;

	for ( int i = 1; i <= n; i++ ) {
		if ( !vis[i] ) {
			f = 0;
			dfs( i );
			if ( !f ) cnt++;
		}
	}

	cout << cnt << "\n";

	return 0;
}