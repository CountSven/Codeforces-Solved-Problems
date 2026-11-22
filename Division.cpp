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
		ll p, q;
		cin >> p >> q;

		if ( p % q ) {
			cout << p << "\n";
			continue;
		}

		ll tmp = q;
		vector<pair<ll, ll>> fac;

		for ( ll i = 2; i * i <= tmp; i++ ) {
			ll cnt = 0;
			while ( tmp % i == 0 ) {
				tmp /= i;
				cnt++;
			}
			if ( cnt ) fac.push_back( { i, cnt } );
		}
		if ( tmp > 1 ) fac.push_back( { tmp, 1 } );

		ll res = 0;

		for ( auto [x, y] : fac ) {
			tmp = p;
			while ( tmp % x == 0 ) tmp /= x;
			for ( ll i = 0; i < y-1; i++ ) tmp *= x;
			res = max( res, tmp );
		}

		cout << res << "\n";
	}

	return 0;
}