#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	ll n;
	cin >> n;
	ll a[n];

	for ( int i = 0; i < n; i++ ) cin >> a[i];

	sort( a, a+n );

	ll mn = 2e18;

	for ( ll i = 1; i <= 1e5; i++ ) {
		ll cur = a[0] - 1, val = 1;
		for ( int j = 1; j < n; j++ ) {
			val *= i;
			cur += llabs( a[j] - val );
			if ( cur > mn ) break;
		}
		// cout << i << " " << cur << "\n";
		mn = min( mn, cur );
	}

	cout << mn << "\n";

	return 0;
}