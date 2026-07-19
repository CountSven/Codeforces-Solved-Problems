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
		vector<vector<int>> vis( n+1, vector<int>( 2, 0 ) );

		for ( int i = 0, x, y; i < n; i++ ) {
			cin >> x >> y;
			vis[x][y] = 1;
		}

		long long cnt = 0;

		for ( int i = 0; i <= n; i++ ) {
			if ( vis[i][0] && vis[i][1] ) cnt += ( n - 2 );
			if ( i+2 <= n && vis[i][0] && vis[i+1][1] && vis[i+2][0] ) cnt++;
			if ( i+2 <= n && vis[i][1] && vis[i+1][0] && vis[i+2][1] ) cnt++;
		}

		cout << cnt << "\n";
	}

	return 0;
}