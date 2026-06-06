#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	int a[n], dp[n][3];

	for ( int i = 0; i < n; i++ ) cin >> a[i];

	for ( int i = 0; i < n; i++ ) {
		for ( int j = 0; j < 3; j++ ) dp[i][j] = 1e9;
	}

	dp[0][0] = 1;

	if ( a[0] == 1 || a[0] == 3 ) dp[0][1] = 0; 
	if ( a[0] == 2 || a[0] == 3 ) dp[0][2] = 0; 

	for ( int i = 1; i < n; i++ ) {
		dp[i][0] = 1 + min( { dp[i-1][0], dp[i-1][1], dp[i-1][2] } );
		
		if ( a[i] == 1 || a[i] == 3 ) dp[i][1] = min( dp[i-1][0], dp[i-1][2] );
		if ( a[i] == 2 || a[i] == 3 ) dp[i][2] = min( dp[i-1][0], dp[i-1][1] );
	}

	// for ( int i = 0; i < n; i++ ) {
	// 	for ( int j = 0; j < 3; j++ ) cout << dp[i][j] << " ";
	// 	cout << "\n";
	// }

	cout << min( { dp[n-1][0], dp[n-1][1], dp[n-1][2] } ) << "\n";

	return 0;
}