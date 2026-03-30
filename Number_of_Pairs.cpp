#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, l, r;
		cin >> n >> l >> r;
		int a[n];

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		sort( a, a+n );

		long long cnt = 0;

		for ( int i = 0; i < n; i++ ) {
			int curL = lower_bound( a, a+n, l - a[i] ) - a;
			int curR = upper_bound( a, a+n, r - a[i] ) - a - 1;

			// cout << curL << " " << curR << "\n";

			cnt += ( curR - curL + 1 );

			if ( i >= curL && i <= curR ) cnt--;
		}

		cout << cnt / 2 << "\n";
	}

	return 0;
}