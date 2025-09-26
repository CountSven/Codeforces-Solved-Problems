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

		int neg = 0, sum = 0, mn = 1e9;

		for ( int i = 0; i < n; i++ ) {
			for ( int j = 0; j < m; j++ ) {
				if ( a[i][j] < 0 ) neg++;

				mn = min( mn, abs( a[i][j] ) );

				sum += abs( a[i][j] );
			}
		}

		if ( neg % 2 ) cout << sum - ( 2 * mn ) << "\n";
		else cout << sum << "\n";
	}

	return 0;
}