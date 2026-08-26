#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, k;
		cin >> n >> k;
		long long a[n];

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		sort( a, a+n );
		reverse( a, a+n );

		long long l = a[0], r = a[0] + k - 1;

		for ( int i = 1; i < n; i++ ) {
			long long nl = a[i], nr = a[i] + k - 1;
			long long div = ( r - a[i] ) / ( 2 * k );
			long long mul = 2 * k * div;
			nl += mul, nr += mul;
			// cout << a[i] << " " << nl << " " << nr << "\n";
			l = max( l, nl );
			r = min( r, nr );
			if ( l > r ) break;
		}

		if ( l > r ) cout << -1 << "\n";
		else cout << l << "\n";
	}

	return 0;
}