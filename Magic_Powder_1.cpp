#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k;
	cin >> n >> k;
	ll a[n], b[n];

	for ( int i = 0; i < n; i++ ) cin >> a[i];
	for ( int i = 0; i < n; i++ ) cin >> b[i];

	ll l = 0, r = 1e9, res = 1e9;

	while ( l <= r ) {
		ll mid = l + ( r - l ) / 2;

		ll tmp = k, f = 0;

		for ( int i = 0; i < n; i++ ) {
			ll val = mid * a[i];
			ll need = 0;
			if ( val > b[i] ) need = val - b[i];
			if ( need > tmp ) {
				f = 1;
				break;
			}
			else tmp -= need;
		}

		if ( !f ) {
			res = mid;
			l = mid + 1;
		}
		else r = mid - 1;
	}

	cout << res << "\n";

	return 0;
}