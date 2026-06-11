#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	ll n, l, r, x;
	cin >> n >> l >> r >> x;
	ll a[n];

	for ( int i = 0; i < n; i++ ) cin >> a[i];

	ll cnt = 0;

	for ( int i = 0; i < ( 1 << n ); i++ ) {
		ll cur = 0, mn = 1e6, mx = 0;
		for ( int j = 0; j < n; j++ ) {
			if ( ( i >> j ) & 1 ) {
				cur += a[j];
				mn = min( mn, a[j] );
				mx = max( mx, a[j] );
			}
		}
		if ( l <= cur && cur <= r && ( mx - mn ) >= x ) cnt++;
	}

	cout << cnt << "\n";

	return 0;
}