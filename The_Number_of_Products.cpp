#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	long long dp[n][2];

	long long neg = 0, pos = 0;

	for ( int i = 0, x; i < n; i++ ) {
		cin >> x;
		if ( !i ) {
			if ( x > 0 ) dp[i][0] = 0, dp[i][1] = 1;
			else dp[i][0] = 1, dp[i][1] = 0;
		}
		else {
			if ( x > 0 ) {
				dp[i][0] = dp[i-1][0];
				dp[i][1] = 1 + dp[i-1][1];
			}
			else {
				dp[i][0] = 1 + dp[i-1][1];
				dp[i][1] = dp[i-1][0];
			}
		}
		neg += dp[i][0];
		pos += dp[i][1];
	}

	cout << neg << " " << pos << "\n";

	return 0;
}