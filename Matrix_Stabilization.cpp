#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, m;
		cin >> n >> m;
		int a[n][m];

		for ( int i = 0; i < n; i++ ) {
			for ( int j = 0; j < m; j++ ) cin >> a[i][j];
		}

		for ( int i = 0; i < n; i++ ) {
			for ( int j = 0; j < m; j++ ) {
				int mx = 0;

				if ( i + 1 < n ) mx = max( mx, a[i+1][j] );
				if ( i - 1 >= 0 ) mx = max( mx, a[i-1][j] );
				if ( j + 1 < m ) mx = max( mx, a[i][j+1] );
				if ( j - 1 >= 0 ) mx = max( mx, a[i][j-1] );

				a[i][j] = min( a[i][j], mx );
			}
		}

		for ( int i = 0; i < n; i++ ) {
			for ( int j = 0; j < m; j++ ) cout << a[i][j] << " ";
			cout << "\n";
		}
	}

	return 0;
}