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
		vector<int> a(n), dp(n+1, n);

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		dp[n] = 0;

		for ( int i = n-1; i >= 0; i-- ) {
			if ( i + a[i] + 1 <= n ) dp[i] = min( dp[i], dp[i + a[i] + 1] );
			dp[i] = min( dp[i], 1 + dp[i+1] );
		}

		cout << dp[0] << "\n";
 	}

	return 0;
}