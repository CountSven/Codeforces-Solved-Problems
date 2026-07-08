#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	cin >> s;

	for ( char c : s ) {
		if ( c == 'w' || c == 'm' ) {
			cout << 0 << "\n";
			return 0;
		}
	}

	int n = s.size();

	vector<int> dp(n + 1);

	dp[0] = dp[1] = 1;

	for ( int i = 2; i <= n; i++ ) {
		if ( s[i-1] == s[i-2] && ( s[i-1] == 'u' || s[i-1] == 'n' ) ) {
			dp[i] = ( dp[i-1] + dp[i-2] ) % MOD;
		}
		else dp[i] = dp[i-1];
	}

	cout << dp[n] << "\n";

	return 0;
}