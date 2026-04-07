#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, x, m;
		cin >> n >> x >> m;
	
		int f = 0, l = x, r = x;

		while ( m-- ) {
			int curL, curR;
			cin >> curL >> curR;

			if ( f ) {
				if ( l <= curR && curR <= r ) l = min( l, curL );
				if ( l <= curL && curL <= r ) r = max( r, curR );
				if ( curL <= l && r <= curR ) {
					l = min( l, curL );
					r = max( r, curR );
				}
			}
			else if ( curL <= x && x <= curR ) {
				f = 1;
				l = curL;
				r = curR;
			}
		}

		// cout << l << " " << r << "\n";

		cout << r - l + 1 << "\n";
	}

	return 0;
}