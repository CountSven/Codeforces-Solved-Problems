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
		char c[n][n];

		for ( int i = 0; i < n; i++ ) {
			for ( int j = 0; j < n; j++ ) cin >> c[i][j];
		}

		int f = 0;

		for ( int i = 0; i < n; i++ ) {
			for ( int j = 0; j < n; j++ ) {
				if ( c[i][j] == '1' ) {
					if ( ( i+1 < n && c[i+1][j] != '1' ) && ( j+1 < n && c[i][j+1] != '1' ) ) {
						f = 1;
						break;
					}
				}
				if ( f ) break;
			}
			if ( f ) break;
		}

		if ( !f ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}