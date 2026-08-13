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
		ll a, b, r;
		cin >> a >> b >> r;

		if ( a == b ) {
			cout << 0 << "\n";
			continue;
		}

		if ( a < b ) swap( a, b );

		for ( ll i = 59, f = 0; i >= 0; i-- ) {
			if ( ( ( a >> i ) & 1 ) && !( ( b >> i ) & 1 ) ) {
				if ( f && r >= ( 1LL << i ) ) {
					a ^= ( 1LL << i );
					b ^= ( 1LL << i );
					r -= ( 1LL << i );
				}
				f = 1;
			}
		}

		cout << a - b << "\n";
	}

	return 0;
}