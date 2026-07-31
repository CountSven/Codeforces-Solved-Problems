#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		string s;
		cin >> s;

		int n = s.size();

		vector<vector<int>> dp( n+1, vector<int>( 2, 0 ) );

		s = '#' + s;

		long long res = 0;

		for ( int i = 1; i <= n; i++ ) {
			if ( s[i] == '0' ) dp[i][0] = 1 + dp[i-1][1];
			else if ( s[i] == '1' ) dp[i][1] = 1 + dp[i-1][0];
			else {
				dp[i][0] = 1 + dp[i-1][1];
				dp[i][1] = 1 + dp[i-1][0];
			}
			
			res += max( dp[i][0], dp[i][1] );
		}

		cout << res << "\n";
	}

	return 0;
}