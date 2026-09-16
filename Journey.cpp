#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;

vector<int> adj[N+1];
double res = 0;

void dfs( int v, int p, int len, double prob )
{
	int f = 0;
	for ( int u : adj[v] ) {
		if ( u != p ) {
			f = 1;
			int cur = adj[v].size();
			if ( v != 1 ) cur--;
			dfs( u, v, len+1, prob / cur );
		}
	}
	if ( !f ) {
		// cout << v << " " << len << " " << prob << "\n";
		res += (1.0) * len * prob;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for ( int i = 1, u, v; i < n; i++ ) {
		cin >> u >> v;
		adj[u].push_back( v );
		adj[v].push_back( u );
	}

	dfs( 1, 0, 0, 1.00 );

	cout << fixed << setprecision(15) << res << "\n";
	
	return 0;
}