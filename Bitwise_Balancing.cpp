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
		ll a = 0, b, c, d;
		cin >> b >> c >> d;

		for ( ll i = 0; i < 62; i++ ) {
			if ( ( ( d >> i ) & 1 ) && !( ( b >> i ) & 1 ) ) a += ( 1LL << i );
			if ( !( ( d >> i ) & 1 ) && ( ( b >> i ) & 1 ) ) a += ( 1LL << i );
		}

		if ( ( a > ( 1LL << 61 ) ) || ( a | b ) - ( a & c ) != d ) cout << -1 << "\n";
		else cout << a << "\n";
	}

	return 0;
}