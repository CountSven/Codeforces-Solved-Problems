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

		int row = n, col = m;

		if ( row > col ) swap( n, m );
		
		int a[n+1][m+1];

		int cnt = 1, dig = 2;

		for ( int i = 1; i <= n; i++ ) {
			int tmp = cnt;
			for ( int j = 1; j <= m; j++ ) {
				if ( tmp ) {
					a[i][j] = 1;
					tmp--;
				}
				else a[i][j] = dig++;
			}
			cnt++;
			dig = 2;
		}

		int mn = min( n, m );
		int mx = max( n, m );

		mn *= 2;

		int res = min( mn, mx );

		cout << res << "\n";

		if ( row <= col ) {
			for ( int i = 1; i <= n; i++ ) {
				for ( int j = 1; j <= m; j++ ) cout << a[i][j] << " ";
				cout << "\n";
			}
		}
		else {
			int b[m+1][n+1];

			for ( int i = 1; i <= n; i++ ) {
				for ( int j = 1; j <= m; j++ ) b[j][i] = a[i][j];
			}

			for ( int i = 1; i <= m; i++ ) {
				for ( int j = 1; j <= n; j++ ) cout << b[i][j] << " ";
				cout << "\n";
			}
		}
	}

	return 0;
}