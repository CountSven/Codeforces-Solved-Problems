#include<bits/stdc++.h>
using namespace std;

int n, f = 0;
char c[2][200005];
int vis[2][200005];

int dr[4] = { -1, 1, 0, 0 };
int dc[4] = { 0, 0, -1, 1 };

void dfs( int i, int j, int tp )
{
	if ( i == 1 && j == n-1 ) {
		f = 1;
		return;
	}

	vis[i][j] = 1;

	if ( tp == 0 ) {
		for ( int cur = 0; cur < 4; cur++ ) {
			int ni = i + dr[cur];
			int nj = j + dc[cur];

			if ( ni >= 0 && ni < 2 && nj >= 0 && nj < n ) {
				if ( !vis[ni][nj] ) dfs( ni, nj, 1 );
			}
		}
	}
	else {
		if ( c[i][j] == '>' ) {
			if ( !vis[i][j+1] ) dfs( i, j+1, 0 );
		}
		else {
			if ( !vis[i][j-1] ) dfs( i, j-1, 0 );
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		cin >> n;

		for ( int i = 0; i < 2; i++ ) {
			for ( int j = 0; j < n; j++ ) cin >> c[i][j];
		}

		for ( int i = 0; i < 2; i++ ) {
			for ( int j = 0; j < n; j++ ) vis[i][j] = 0;
		}

		f = 0;

		dfs( 0, 0, 0 );

		if ( f ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}