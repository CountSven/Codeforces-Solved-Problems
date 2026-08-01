#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	set<int> good;

	for ( int i = 1; i <= n; i++ ) good.insert( i );

	map<int, set<int>> greater;
	
	while ( m-- ) {
		int u, v;
		cin >> u >> v;
		if ( u > v ) swap( u, v );
		if ( good.size() && good.count( u ) ) good.erase( u );
		greater[u].insert( v );
	}

	int q;
	cin >> q;

	while ( q-- ) {
		int tp, u, v;
		cin >> tp;
		if ( tp == 1 ) {
			cin >> u >> v;
			if ( u > v ) swap( u, v );
			if ( good.size() && good.count( u ) ) good.erase( u );
			greater[u].insert( v );
		}
		else if ( tp == 2 ) {
			cin >> u >> v;
			if ( u > v ) swap( u, v );
			if ( greater[u].size() && greater[u].count( v ) ) greater[u].erase( v );
			if ( !greater[u].size() ) good.insert( u );
		}
		else cout << good.size() << "\n";
	}

	return 0;
}