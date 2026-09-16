#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	vector<int> adj[n+1], vis(n+1, 0);

	while ( m-- ) {
		int u, v;
		cin >> u >> v;
		adj[u].push_back( v );
		adj[v].push_back( u );
	}

	set<int> st = { 1 };

	while ( st.size() ) {
		int v = *st.begin();
		st.erase( st.begin() );
		cout << v << " ";
		vis[v] = 1;

		for ( int u : adj[v] ) {
			if ( !vis[u] ) st.insert( u );
		}
	}
	cout << "\n";

	return 0;
}