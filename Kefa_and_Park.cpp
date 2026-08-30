#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;

int n, m, cnt = 0;
int a[N+1];
vector<int> adj[N+1];

void dfs( int v, int p, int cur )
{
	if ( a[v] ) cur++;
	else cur = 0;
	if ( cur > m ) return;
	int f = 0;
	for ( int u : adj[v] ) {
		if ( u != p ) {
			f = 1;
			dfs( u, v, cur );
		}
	}
	if ( !f ) {
		// cout << v << " ";
		cnt++;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n >> m;

	for ( int i = 1; i <= n; i++ ) cin >> a[i];

	for ( int i = 1, x, y; i < n; i++ ) {
		cin >> x >> y;
		adj[x].push_back( y );
		adj[y].push_back( x );
	}

	dfs( 1, 0, 0 );
	// cout << "\n";

	cout << cnt << "\n";

	return 0;
}