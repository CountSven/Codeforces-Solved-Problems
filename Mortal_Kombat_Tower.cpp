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
		int a[n], dp[n+1][2];

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		dp[n][0] = dp[n][1] = 0;
		dp[n-1][0] = a[n-1];
		dp[n-1][1] = 0;

		for ( int i = n-2; i >= 0; i-- ) {
			dp[i][0] = min( dp[i+1][1] + a[i], dp[i+2][1] + a[i] + a[i+1] );
			dp[i][1] = min( dp[i+1][0], dp[i+2][0] );
		}

		cout << dp[0][0] << "\n";
	}

	return 0;
}