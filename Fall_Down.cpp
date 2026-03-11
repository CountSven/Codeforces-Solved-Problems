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
		char c[n+1][m+1];

		for ( int i = 1; i <= n; i++ ) {
			for ( int j = 1; j <= m; j++ ) cin >> c[i][j];
		}

		for ( int i = n; i >= 1; i-- ) {
			for ( int j = 1; j <= m; j++ ) {
				if ( c[i][j] == '*' ) {
					int cur = i;

					while ( cur + 1 <= n && c[cur+1][j] == '.' ) {
						c[cur][j] = '.';
						c[cur+1][j] = '*';
						cur++;
					}
				}
			}
		}

		for ( int i = 1; i <= n; i++ ) {
			for ( int j = 1; j <= m; j++ ) cout << c[i][j];
			cout << "\n";
		}
		cout << "\n";
	}

	return 0;
}