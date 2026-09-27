#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	ll n, s;
	cin >> n >> s;
	int a[n+1];

	for ( int i = 1; i <= n; i++ ) cin >> a[i];

	ll l = 0, r = n, res = 0, sm = 0;

	while ( l <= r ) {
		ll mid = l + ( r - l ) / 2;

		vector<ll> b;

		for ( int i = 1; i <= n; i++ ) {
			ll cur = a[i] + i * 1LL * mid;
			b.push_back( cur );
		}

		sort( b.begin(), b.end() );

		ll tot = 0;

		for ( int i = 0; i < mid; i++ ) tot += b[i];

		if ( tot <= s ) {
			res = mid;
			sm = tot;
			l = mid + 1;
		}
		else r = mid - 1;
	}

	cout << res << " " << sm << "\n";

	return 0;
}