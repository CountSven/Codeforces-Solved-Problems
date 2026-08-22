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
		int a[n];

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		sort( a, a+n );

		int l = 0, r = 1e9, res = 1e9;

		while ( l <= r ) {
			int mid = l + ( r - l ) / 2;
			int cur = a[0] + mid, cnt = 1;

			for ( int i = 1; i < n; i++ ) {
				if ( abs( cur - a[i] ) > mid ) {
					cur = a[i] + mid;
					cnt++;
				}
			}

			if ( cnt <= 3 ) {
				res = mid;
				r = mid - 1;
			}
			else l = mid + 1;
		}

		cout << res << "\n";
	}

	return 0;
}