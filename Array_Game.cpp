#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		ll n, k;
		cin >> n >> k;
		ll a[n];

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		if ( k >= 3 ) cout << 0 << "\n";
		else {
			sort( a, a+n );

			ll res = a[0];

			for ( int i = 1; i < n; i++ ) res = min( res, a[i] - a[i-1] );

			if ( k == 2 ) {
				for ( int i = 0; i < n; i++ ) {
					for ( int j = i+1; j < n; j++ ) {
						ll val = a[j] - a[i];
						auto ub = upper_bound( a, a+n, val ) - a;
						if ( ub < n ) res = min( res, a[ub] - val );
						ub--;
						if ( ub >= 0 ) res = min( res, val - a[ub] );
					}
				}
			}

			cout << res << "\n";
		}

	}

	return 0;
}