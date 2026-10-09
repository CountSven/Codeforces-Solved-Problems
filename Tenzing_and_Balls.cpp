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
		vector<int> a(n+1), dp(n+1, 0), mx(n+1, -1e9);

		for ( int i = 1; i <= n; i++ ) cin >> a[i];
	
		for ( int i = 1; i <= n; i++ ) {
			dp[i] = max( dp[i - 1], i + 1 + mx[a[i]] );
			mx[a[i]] = max( mx[a[i]], dp[i - 1] - i );
		}

		cout << dp[n] << "\n";
	}

	return 0;
}