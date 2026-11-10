#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	ll n, a, b, k;
	cin >> n >> a >> b >> k;
	ll h[n], need[n];

	for ( int i = 0; i < n; i++ ) {
		cin >> h[i];
		ll l = 0, r = 1e9, res = 1e9;
		
		while ( l <= r ) {
			ll mid = l + ( r - l ) / 2;
			ll cur = mid * a + mid * b;
			if ( cur < h[i] ) {
				res = mid;
				l = mid + 1;
			}
			else r = mid - 1;
		}

		ll have = ( res + 1 ) * a + res * b;
		ll rem = h[i] - have;
		ll req;
		if ( rem > 0 ) req = ( rem + a - 1 ) / a;
		else req = 0;
		need[i] = req;
	}

	// for ( auto u : need ) cout << u << " ";
	// cout << "\n"; 

	sort( need, need + n );

	int cnt = 0;

	for ( int i = 0; i < n; i++ ) {
		if ( k - need[i] >= 0 ) {
			k -= need[i];
			cnt++;
		}
		else break;
	}

	cout << cnt << "\n";

	return 0;
}