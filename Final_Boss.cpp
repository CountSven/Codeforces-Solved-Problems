#include<bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		ll h, n;
		cin >> h >> n;
		ll a[n], c[n];

		for ( int i = 0; i < n; i++ ) cin >> a[i];
		for ( int i = 0; i < n; i++ ) cin >> c[i];

		ll sum = accumulate( a, a+n, 0LL );

		if ( sum >= h ) {
			cout << 1 << "\n";
			continue;
		}
	
		ll l = 1, r = 2e14, res = 2e14;

		while ( l <= r ) {
			// cout << l << " " << r << "\n";
			ll mid = l + ( r - l ) / 2;
			ll cnt = 0;

			for ( int i = 0; i < n; i++ ) {
				ll cur = 1;
				cur += ( mid - 1 ) / c[i];
				cnt += cur * a[i]; 
			}

			// cout << cnt << "\n";

			if ( cnt >= h ) {
				res = mid;
				r = mid - 1;
			}
			else l = mid + 1;
		}

		cout << res << "\n";
	}

	return 0;
}