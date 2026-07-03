#include<bits/stdc++.h>
using namespace std;

const int N = 2e5+10;

vector<int> adj[N];
map<pair<int, int>, int> idx;
vector<int> dp(N, 0);

void dfs( int v, int p )
{
	for ( int u : adj[v] ) {
		if ( u == p ) continue;

		if ( idx[{ v, u }] < idx[{ p, v }] ) dp[u] = dp[v] + 1;
		else dp[u] = dp[v];

		dfs( u, v );
	}
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

		for ( int i = 1; i < n; i++ ) {
			int u, v;
			cin >> u >> v;
			adj[u].push_back( v );
			adj[v].push_back( u );
			idx[{ u, v }] = i;
			idx[{ v, u }] = i;
		}

		idx[{ 0, 1 }] = 0;
		dp[1] = 1;

		dfs( 1, 0 );

		int res = 1;

		for ( int i = 1; i <= n; i++ ) {
			res = max( res, dp[i] );
			dp[i] = 0;
			adj[i].clear();
		}

		idx.clear();

		cout << res << "\n";
	}

	return 0;
}