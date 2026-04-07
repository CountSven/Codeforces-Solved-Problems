#include<bits/stdc++.h>
using namespace std;

vector<int> cost, parent;

int FIND( int v ) {
	if ( v == parent[v] ) return v;
	else return parent[v] = FIND( parent[v] );
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	cost.resize( n+1 );
	parent.resize( n+1 );

	for ( int i = 1; i <= n; i++ ) {
		cin >> cost[i];
		parent[i] = i;
	}

	while ( m-- ) {
		int x, y;
		cin >> x >> y;

		int curX = FIND( x );
		int curY = FIND( y );

		if ( cost[curX] < cost[curY] ) parent[curY] = curX;
		else parent[curX] = curY;
	}

	long long res = 0;

	// for ( int i = 1; i <= n; i++ ) {
	// 	cout << i << " " << parent[i] << "\n";
	// }

	for ( int i = 1; i <= n; i++ ) {
		if ( FIND( parent[i] ) == i ) res += cost[i];
	}

	cout << res << "\n";

	return 0;
}