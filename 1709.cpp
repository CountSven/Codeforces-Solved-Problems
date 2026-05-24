#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n;
		cin >> n;
		int a[n], b[n], c[n], d[n];

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			c[i] = a[i];
		}
		
		for ( int i = 0; i < n; i++ ) {
			cin >> b[i];
			d[i] = b[i];
		}

		vector<pair<int, int>> v;

		sort( c, c+n );

		for ( int i = 0; i < n; i++ ) {
			if ( a[i] == c[i] ) continue;
			for ( int j = i+1; j < n; j++ ) {
				if ( a[j] == c[i] ) {
					while ( j != i ) {
						swap( a[j], a[j-1] );
						j--;
						v.push_back( { 1, j } );
					}
					break;
				}
			}
		}

		sort( d, d+n );

		for ( int i = 0; i < n; i++ ) {
			if ( b[i] == d[i] ) continue;
			for ( int j = i+1; j < n; j++ ) {
				if ( b[j] == d[i] ) {
					while ( j != i ) {
						swap( b[j], b[j-1] );
						j--;
						v.push_back( { 2, j } );
					}
					break;
				}
			}
		}

		for ( int i = 0; i < n; i++ ) {
			if ( a[i] > b[i] ) {
				swap( a[i], b[i] );
				v.push_back( { 3, i } );
			}
		}

		cout << v.size() << "\n";
		for ( auto [x, y] : v ) cout << x << " " << y+1 << "\n";
	}

	return 0;
}