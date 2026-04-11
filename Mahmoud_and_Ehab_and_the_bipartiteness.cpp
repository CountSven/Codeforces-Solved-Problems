#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> g;
vector<int> col;

void dfs( int u, int c )
{
	if ( col[u] != -1 ) return;
	col[u] = c;

	for ( auto v : g[u] ) dfs( v, 1 - c );
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	g.resize(n);
	col.resize( n, -1 );

	for ( int i = 1; i < n; i++ ) {
		int u, v;
		cin >> u >> v;
		u--;
		v--;
		g[u].push_back( v );
		g[v].push_back( u );
	}

	// for ( int i = 0; i < n; i++ ) {
	// 	cout << i << " -> ";
	// 	for ( int j = 0; j < g[i].size(); j++ ) cout << g[i][j] << " ";
	// 	cout << "\n";
	// }

	dfs( 0, 0 );

	int cnt1 = 0, cnt2 = 0;

	for ( int i = 0; i < n; i++ ) {
		if ( col[i] ) cnt1++;
		else cnt2++;
	}

	cout << ( 1LL * cnt1 * cnt2 ) - ( n - 1 ) << "\n"; 

	return 0;
}