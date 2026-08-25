#include<bits/stdc++.h>
using namespace std;

vector<int> par1( 1005 ), par2( 1005 ), sz1( 1005, 1 ), sz2( 1005, 1 );

int get( int v, int tp )
{
	if ( tp == 1 ) {
		if ( v == par1[v] ) return v;
		else return par1[v] = get( par1[v], 1 );
	}
	else {
		if ( v == par2[v] ) return v;
		else return par2[v] = get( par2[v], 2 );
	}
}

void unite( int a, int b, int tp )
{
	if ( tp == 1 ) {
		a = get( a, 1 );
		b = get( b, 1 );

		if ( a != b ) {
			if ( sz1[a] < sz1[b] ) swap( a, b );
			par1[b] = a;
			sz1[a] += sz1[b];
		}
	}
	else {
		a = get( a, 2 );
		b = get( b, 2 );

		if ( a != b ) {
			if ( sz2[a] < sz2[b] ) swap( a, b );
			par2[b] = a;
			sz2[a] += sz2[b];
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	for ( int i = 1; i <= 1000; i++ ) par1[i] = i;
	for ( int i = 1; i <= 1000; i++ ) par2[i] = i;

	int n, m1, m2, u, v;
	cin >> n >> m1 >> m2;

	while ( m1-- ) {
		cin >> u >> v;
		if ( u > v ) swap( u, v );
		unite( u, v, 1 ); 
	}

	while ( m2-- ) {
		cin >> u >> v;
		if ( u > v ) swap( u, v );
		unite( u, v, 2 ); 
	}

	vector<pair<int, int>> res;

	for ( int i = 1; i <= n; i++ ) {
		for ( int j = 1; j <= n; j++ ) {
			if ( ( get( i, 1 ) != get( j, 1 ) ) && ( get( i, 2 ) != get( j, 2 ) ) ) {
				res.push_back( make_pair( i, j ) );
				unite( i, j, 1 );
				unite( i, j, 2 );
			}
		}
	}

	cout << res.size() << "\n";
	for ( auto [x, y] : res ) cout << x << " " << y << "\n";

	return 0;
}