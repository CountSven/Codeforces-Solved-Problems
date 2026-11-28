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
		vector<vector<int>> a(n + 1, vector<int>(m + 1));
		vector<vector<int>> vis(n + 1, vector<int>(m + 1));

		for ( int i = 1; i <= n; i++ ) {
			for ( int j = 1; j <= m; j++ ) cin >> a[i][j];
		}

		vector<int> c0(n + m), c1(n + m);

		// int cnt = 0;

		auto dfs = [&]( auto&& self, int i, int j, int step ) -> void {
			if ( min( i, j ) < 1 || i > n || j > m || vis[i][j] ) return;
			vis[i][j] = 1;
			// cnt++;
			if ( !a[i][j] ) c0[step]++;
			else c1[step]++;
			self( self, i + 1, j, step + 1 );
			self( self, i, j + 1, step + 1 );
		};

		dfs( dfs, 1, 1, 1 );

		// cout << n * m << " -> " << cnt << "\n";

		// for ( int i = 1; i < n + m; i++ ) cout << c0[i] << " ";
		// cout << "\n";
		// for ( int i = 1; i < n + m; i++ ) cout << c1[i] << " ";
		// cout << "\n";
	
		int res = 0;

		for ( int i = 1, j = n + m - 1; i < j; i++, j-- ) {
			int v1 = c0[i] + c0[j];
			int v2 = c1[i] + c1[j];
			int cur = v1 + v2 - max( v1, v2 );
			res += cur;
		}

		cout << res << "\n";
	}

	return 0;
}