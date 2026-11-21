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

		long long lb = 1e18, lc = 1e18, rb = 0, rc = 1e18, cur = 1e18, l, r, c;

		for ( int i = 0; i < n; i++ ) {
			cin >> l >> r >> c;
			if ( l < lb ) {
				lb = l;
				lc = 1e18;
				cur = 1e18;
			}
			if ( r > rb ) {
				rb = r;
				rc = 1e18;
				cur = 1e18;
			}
			if ( l == lb ) lc = min( lc, c );
			if ( r == rb ) rc = min( rc, c );
			if ( l == lb && r == rb ) cur = min( cur, c );
			cout << min( cur, lc + rc ) << "\n";
		}   		
	}

	return 0;
}