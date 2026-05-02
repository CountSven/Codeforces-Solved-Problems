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
		ll n;
		cin >> n;
		vector<ll> pos;

		for ( ll i = 0; i < 63; i++ ) {
			if ( n & ( 1LL << i ) ) pos.push_back( i );
		}

		// cout << pos.size() << "\n";
		// for ( auto u : pos ) cout << u << " ";
		// cout << "\n";

		if ( pos.size() == 1 ) cout << 1 << "\n" << n << "\n";
		else {
			vector<ll> res;
			res.push_back( n );

			for ( auto u : pos ) {
				ll cur = 0;
				for ( ll i = 0; i < 63; i++ ) {
					if ( i == u ) continue;
					else if ( n & ( 1LL << i ) ) cur += ( 1LL << i );
				}
				res.push_back( cur );
			}

			reverse( res.begin(), res.end() );

			cout << res.size() << "\n";
			for ( auto u : res ) cout << u << " ";
			cout << "\n";
		}
	}

	return 0;
}