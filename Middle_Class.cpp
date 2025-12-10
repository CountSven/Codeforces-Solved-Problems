#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, x;
		cin >> n >> x;
		long long a[n+1], pref[n+1];

		long long sum = 0;

		for ( int i = 1; i <= n; i++ ) {
			cin >> a[i];
			sum += a[i];
		}

		sort( a+1, a+n+1 );
		reverse( a+1, a+n+1 );

		// for ( int i = 1; i <= n; i++ ) cout << pref[i] << " ";
		// cout << "\n";

		int r = n;

		while ( r > 0 ) {
			long long cur = sum / r;

			if ( cur >= x ) break;

			sum -= a[r];
			r--;
		}

		cout << r << "\n";
	}

	return 0;
}