#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	// for ( ll a = 1; a <= 1000; a++ ) {
	//     for ( ll b = 1; b <= 1000; b++ ) {
	//         for ( ll c = 1; c <= 1000; c++ ) {
	//             ll v1 = a * a;
	//             ll v2 = c + b;
	//             ll v3 = ( c * c ) - ( b * b );
	//             if ( v1 == v2 && v2 == v3 ) cout << a << " " << b << " " << c << "\n";
	//         }
	//     }
	// }
	
	int t;
	cin >> t;

	while ( t-- ) {
		ll n;
		cin >> n;

		ll l = 3, r = 1e5+3, res = 0;

		while ( l <= r ) {
			if ( l % 2 == 0 ) l--;
			if ( r % 2 == 0 ) r++;

			ll mid = l + ( r - l ) / 2;
			if ( mid % 2 == 0 ) mid--;

			ll need = ( mid * mid + 1 ) / 2;

			// cout << l << " " << r << " " << mid << "\n";

			if ( need <= n ) {
				res = mid;
				l = mid + 2;
			}
			else r = mid - 2;
		}

		cout << res / 2 << "\n";
	}

	return 0;
}