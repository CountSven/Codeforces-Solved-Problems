#include<bits/stdc++.h>
using namespace std;

const int N = 4e4, MOD = 1e9+7;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> dp( N+1, 0 );

	dp[0] = 1;

	for ( int i = 1; i <= N; i++ ) {
		string s = to_string( i ), r;
		r = s;
		reverse( s.begin(), s.end() );
		if ( s != r ) continue;
		for ( int j = i; j <= N; j++ ) dp[j] = ( dp[j] + dp[j-i] ) % MOD;
	}

	int t;
	cin >> t;

	while ( t-- ) {
		int n;
		cin >> n;
		cout << dp[n] << "\n";
	}

	return 0;
}