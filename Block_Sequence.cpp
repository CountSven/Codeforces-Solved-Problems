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

		dp[0] = 0;

		for ( int i = 0; i < n; i++ ) {
			dp[i+1] = min( dp[i+1], dp[i] + 1 );
			int rng = i + a[i] + 1;
			if ( rng <= n ) dp[rng] = min( dp[rng], dp[i] );
		}

		cout << dp[n] << "\n";
 	}

	return 0;
}