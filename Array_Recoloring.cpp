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

		if ( n-1 == k ) cout << accumulate( a, a+n, 0LL ) << "\n";
		else {
			long long mx = 0;

			if ( k == 1 ) {
				mx = a[0] + a[n-1];

				for ( int i = 1; i+1 < n; i++ ) mx = max( mx, a[i] + max( a[0], a[n-1] ) );
			}
			else {
				sort( a, a+n );

				for ( int i = n-1, j = 0; j <= k; i--, j++ ) mx += a[i];
			}

			cout << mx << "\n";
		}
	}

	return 0;
}