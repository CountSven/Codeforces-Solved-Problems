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
		ll n, g, b;
		cin >> n >> g >> b;

		ll need = ( n + 1 ) / 2;

		ll div = need / g;

		if ( ( need == g ) || !div ) cout << n << "\n";
		else {
			ll days = div * g;
			days += ( div - 1 ) * b;
			need -= ( div * g );
			if ( need ) days += b + need;
			cout << max( days, n ) << "\n";
		}
	}

	return 0;
}