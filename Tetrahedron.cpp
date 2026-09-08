#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9+7;

int n, cnt = 0;

void dfs( int v, int cur )
{
	if ( cur == n ) {
		if ( v == 3 ) cnt++;
		return;
	}

	if ( v != 0 ) dfs( 0, cur+1 );
	if ( v != 1 ) dfs( 1, cur+1 );
	if ( v != 2 ) dfs( 2, cur+1 );
	if ( v != 3 ) dfs( 3, cur+1 );
}

int main()
{
	cin >> n;

	// dfs( 3, 0 );

	// cout << cnt << "\n";

	int dp[n+1][4];

	dp[0][0] = dp[0][1] = dp[0][2] = 0;
	dp[0][3] = 1;

	for ( int i = 1; i <= n; i++ ) {
		dp[i][0] = dp[i][1] = dp[i][2] = dp[i][3] = 0;

		dp[i][0] = ( dp[i][0] + dp[i-1][1] ) % MOD;
		dp[i][0] = ( dp[i][0] + dp[i-1][2] ) % MOD;
		dp[i][0] = ( dp[i][0] + dp[i-1][3] ) % MOD;

		dp[i][1] = ( dp[i][1] + dp[i-1][0] ) % MOD;
		dp[i][1] = ( dp[i][1] + dp[i-1][2] ) % MOD;
		dp[i][1] = ( dp[i][1] + dp[i-1][3] ) % MOD;

		dp[i][2] = ( dp[i][2] + dp[i-1][0] ) % MOD;
		dp[i][2] = ( dp[i][2] + dp[i-1][1] ) % MOD;
		dp[i][2] = ( dp[i][2] + dp[i-1][3] ) % MOD;

		dp[i][3] = ( dp[i][3] + dp[i-1][0] ) % MOD;
		dp[i][3] = ( dp[i][3] + dp[i-1][1] ) % MOD;
		dp[i][3] = ( dp[i][3] + dp[i-1][2] ) % MOD;
	}

	cout << dp[n][3] << "\n";
}