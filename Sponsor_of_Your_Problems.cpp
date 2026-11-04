#include<bits/stdc++.h>
using namespace std;

int dp[11][2][2];

int solve( string &l, string &r, int idx, int t1, int t2 )
{
	if ( idx == l.size() ) return 0;

	if ( dp[idx][t1][t2] != -1 ) return dp[idx][t1][t2];

	int res = 0x3f3f3f3f;

	int lb = t1 ? l[idx] - '0' : 0;
	int ub = t2 ? r[idx] - '0' : 9;

	for ( int i = lb; i <= ub; i++ ) {
		int val = 0;
		val += i == ( l[idx] - '0' );
		val += i == ( r[idx] - '0' );
		res = min( res, val + solve( l, r, idx + 1, t1 && ( i == lb ), t2 && ( i == ub ) ) );
	}

	return dp[idx][t1][t2] = res;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		string l, r;
		cin >> l >> r;
		memset( dp, -1, sizeof( dp ) );
		cout << solve( l, r, 0, 1, 1 ) << "\n";
	}

	return 0;
}