#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int l, r;
		cin >> l >> r;

		int rng = r - l + 1;
		int mx = rng / 2;

		if ( l % 2 && r % 2 ) mx++;

		for ( int i = 1; i < 20; i++ ) {
			int cur = 1 << i, rng = 1 << ( i + 1 ), cnt = 0;
			if ( cur > r ) break;
			// cout << i << ": ";
			for ( int j = cur; j <= r; j += rng )  {
				// cout << j << " ";
				int curL = j, curR = j + cur - 1;
				int nL = max( l, curL );
				int nR = min( r, curR );
				if ( nL <= nR ) cnt += ( nR - nL + 1 ); 
			}
			// cout << "\n";
			// cout << cur << " " << cnt << "\n";
			mx = max( mx, cnt );
		}

		cout << rng - mx << "\n";
	}

	return 0;
}