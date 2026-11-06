#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+6;

int dp[N][N];
string a, b, c;
int n, m;

int solve( int i, int j )
{
	if ( i == n && j == m ) return 0;

	if ( dp[i][j] != -1 ) return dp[i][j];

	int res = 1e9;

	if ( i < n ) res = min( res, ( a[i] != c[i + j] ) + solve( i + 1, j ) );
	if ( j < m ) res = min( res, ( b[j] != c[i + j] ) + solve( i, j + 1 ) );

	return dp[i][j] = res;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		cin >> a >> b >> c;
		n = a.size(), m = b.size();

		for ( int i = 0; i <= n; i++ ) {
			for ( int j = 0; j <= m; j++ ) dp[i][j] = -1;
		}

		cout << solve( 0, 0 ) << "\n";
	}

	return 0;
}