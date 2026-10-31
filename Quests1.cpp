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
		ll n, c, d;
		cin >> n >> c >> d;
		ll a[n];

		for ( int i = 0; i < n; i++ ) cin >> a[i];
	
		sort( a, a+n );
		reverse( a, a+n );

		ll sum = 0;

		for ( int i = 0; i < min( n, d ); i++ ) sum += a[i];

		if ( sum >= c ) {
			cout << "Infinity" << "\n";
			continue;
		}

		ll l = 0, r = d-1, res = -1;

		while ( l <= r ) {
			ll mid = l + ( r - l ) / 2;
			ll rng = min( n-1, mid );
			ll cur = 0, rem = d;
			// cout << mid << ":\n";
			for ( int i = 0; i <= rng; i++ ) {
				cur += a[i];
				rem--;
				ll ext = ( rem / ( mid + 1 ) ) * a[i];
				// cout << i << " " << cur << " " << ext << "\n";
				cur += ext;
				if ( cur >= c ) break;
			}
			if ( cur >= c ) {
				res = mid;
				l = mid + 1;
			}
			else r = mid - 1;
		}

		if ( res == -1 ) cout << "Impossible" << "\n";
		else cout << res << "\n";
	}

	return 0;
}