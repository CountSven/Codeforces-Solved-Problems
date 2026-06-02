#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	ll n, h;
	cin >> n >> h;

	vector<ll> a(n), b;

	for ( int i = 0; i < n; i++ ) cin >> a[i];

	ll l = 0, r = n-1, k = 0;

	while ( l <= r ) {
		ll mid = l + ( r - l ) / 2;

		for ( int i = 0; i <= mid; i++ ) b.push_back( a[i] );
		sort( b.rbegin(), b.rend() );

		ll curH = 0;

		for ( int i = 0; i <= mid; i += 2 ) {
			curH += b[i];
			if ( curH > h ) break;
		}

		if ( curH <= h ) {
			k = mid;
			l = mid + 1;
		}
		else r = mid - 1;

		b.clear();
	}

	cout << k + 1 << "\n";

	return 0;
}