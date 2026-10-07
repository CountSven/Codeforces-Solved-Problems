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

		vector<int> left, right;

		for ( int i = 0; i < n; i++ ) {
			if ( s[i] == 'A' ) continue;
			int l = 0, r = 0;
			int j = i-1;
			while ( j >= 0 && s[j] == 'A' ) {
				l++;
				j--;
			}
			j = i + 1;
			while ( j < n && s[j] == 'A' ) {
				r++;
				j++;
			}
			if ( l || r ) {
				left.push_back( l );
				right.push_back( r );
			}
		}

		// for ( auto u : left ) cout << u << " ";
		// cout << "\n";
		// for ( auto u : right ) cout << u << " ";
		// cout << "\n";

		n = left.size();

		long long dp[n][2];

		for ( int i = 0; i < n; i++ ) {
			dp[i][0] = left[i];
			dp[i][1] = right[i];
			if ( i ) {
				dp[i][0] += dp[i-1][0];
				dp[i][1] += max( dp[i-1][0], dp[i-1][1] );
			}
		}

		if ( n ) cout << max( dp[n-1][0], dp[n-1][1] ) << "\n";
		else cout << 0 << "\n";
	}

	return 0;
}