#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int k, n, m;
		cin >> k >> n >> m;
		int a[n], b[m];

		for ( int i = 0; i < n; i++ ) cin >> a[i];
		for ( int i = 0; i < m; i++ ) cin >> b[i];

		vector<int> v;

		int i = 0, j = 0, f = 0;
		
		while ( i < n || j < m ) {
			if ( i < n && a[i] == 0 ) {
				k++;
				v.push_back( 0 );
				i++;
			}
			else if ( j < m && b[j] == 0 ) {
				k++;
				v.push_back( 0 );
				j++;
			}
			else if ( i < n && a[i] <= k ) {
				v.push_back( a[i] );
				i++;
			}
			else if ( j < m && b[j] <= k ) {
				v.push_back( b[j] );
				j++;
			}
			else {
				f = 1;
				break;
			}
		}

		if ( f ) cout << -1 << "\n";
		else {
			for ( auto u : v ) cout << u << " ";
			cout << "\n";
		}
	}

	return 0;
}