#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, m;
		cin >> n >> m;
		int a[n];

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		int b;
		cin >> b;

		reverse( a, a+n );

		a[0] = max( a[0], b - a[0] );

		int f = 0;

		for ( int i = 1; i < n; i++ ) {
			int cur = b - a[i];
			int mx = max( cur, a[i] );
			int mn = min( cur, a[i] );

			if ( mx <= a[i-1] ) a[i] = mx;
			else if ( mn <= a[i-1] ) a[i] = mn;
			else {
				f = 1;
				break;
			}
		}

		// for ( int i = 0; i < n; i++ ) cout << a[i] << " ";
		// cout << "\n";

		if ( !f ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}