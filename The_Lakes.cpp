#include<bits/stdc++.h>
using namespace std;

int n, m, a[1000][1000];
long long res = 0, cur = 0;

void dfs( int i, int j )
{
	if ( i < 0 || j < 0 || i >= n || j >= m || !a[i][j] ) return;
	cur += a[i][j];
	a[i][j] = 0;

	dfs( i+1, j );
	dfs( i-1, j );
	dfs( i, j+1 );
	dfs( i, j-1 );
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		cin >> n >> m;

		for ( int i = 0; i < n; i++ ) {
			for ( int j = 0; j < m; j++ ) cin >> a[i][j];
		}

		res = 0;

		for ( int i = 0; i < n; i++ ) {
			for ( int j = 0; j < m; j++ ) {
				if ( a[i][j] ) {
					cur = 0;
					dfs( i, j );
					res = max( res, cur );
				}
			}
		}

		cout << res << "\n";
	}

	return 0;
}