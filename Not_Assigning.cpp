#include<bits/stdc++.h>
using namespace std;

vector<int> edges[100005];
vector<int> vis( 1e5+5, 0 ), res( 1e5+5 );
map<pair<int, int>, int> pos;
int cur = 1;

void dfs( int u )
{
	vis[u] = 1;
	for ( int v : edges[u] ) {
		if ( vis[v] ) continue;
		int val = cur++ % 2 ? 2 : 3 ;
		res[pos[{ u, v }]] = val;
		dfs( v );
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
		vector<int> freq( n+1, 0 );

		for ( int i = 1, u, v; i < n; i++ ) {
			cin >> u >> v;
			edges[u].push_back( v ); 
			edges[v].push_back( u ); 
			pos[make_pair( u, v )] = i;
			pos[make_pair( v, u )] = i;
			freq[u]++;
			freq[v]++;
		}

		int f = 0, u;

		for ( int i = 1; i <= n; i++ ) {
			if ( freq[i] > 2 ) {
				f = 1;
				break;
			}
			else if ( freq[i] == 1 ) u = i;
		}

		if ( f ) cout << -1 << "\n";
		else {
			dfs( u );

			for ( int i = 1; i < n; i++ ) cout << res[i] << " \n"[i + 1 == n];
		}

		for ( int i = 1;  i <= n; i++ ) {
			edges[i].clear();
			vis[i] = 0;
		}
		pos.clear();
		cur = 1;
	}

	return 0;
}