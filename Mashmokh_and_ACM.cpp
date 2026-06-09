#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k, mod = 1000000007;
	cin >> n >> k;

	vector<vector<int>> divs( n+1 ), dp( k+1, vector<int>( n + 1, 0 ) );

	for ( int i = 1; i <= n; i++ ) {
		for ( int j = 1; j * j <= i; j++ ) {
			if ( i % j == 0 ) {
				divs[i].push_back( j );
				if ( ( i / j ) != j ) divs[i].push_back( i / j );
			}
		}
	}

	// for ( int i = 1; i <= n; i++ ) {
	// 	cout << i << " -> ";
	// 	for ( auto u : divs[i] ) cout << u << " ";
	// 	cout << "\n"; 
	// }

	for ( int i = 1; i <= n; i++ ) dp[1][i] = 1;

	for ( int i = 2; i <= k; i++ ) {
		for ( int j = 1; j <= n; j++ ) {
			for ( auto d : divs[j] ) dp[i][j] = ( dp[i][j] + dp[i-1][d] ) % mod;
		}
	}

	// for ( int i = 1; i <= k; i++ ) {
	// 	for ( int j = 1; j <= n; j++ ) cout << dp[i][j] << " ";
	// 	cout << "\n";
	// }

	int res = 0;

	for ( int i = 1; i <= n; i++ ) res = ( res + dp[k][i] ) % mod;

	cout << res << "\n";

	return 0;
}