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
		char c[n+1][n+1];
		vector<vector<int>> vis( n+1, vector<int>( n+1, 0 ) );

		for ( int i = 1; i <= n; i++ ) {
			for ( int j = 1; j <= n; j++ ) cin >> c[i][j];
		}

		int res = 0;

		for ( int i = 1; i <= n; i++ ) {
			for ( int j = 1; j <= n; j++ ) {
				if ( vis[i][j] ) continue;
				int cnt0 = 0, cnt1 = 0;

				if ( c[i][j] == '0' ) cnt0++;
				else cnt1++;
				if ( c[n-i+1][n-j+1] == '0' ) cnt0++;
				else cnt1++;
				if ( c[n-j+1][i] == '0' ) cnt0++;
				else cnt1++;
				if ( c[j][n-i+1] == '0' ) cnt0++;
				else cnt1++;

				vis[i][j] = 1;
				vis[n-i+1][n-j+1] = 1;
				vis[n-j+1][i] = 1;
				vis[j][n-i+1] = 1;

				// cout << i << " " << j << " -> " << cnt0 << " " << cnt1 << "\n";
				res += min( cnt0, cnt1 );
			}
		}

		cout << res << "\n";
	}

	return 0;
}