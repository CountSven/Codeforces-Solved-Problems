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
		ll n, k;
		cin >> n >> k;
		ll a[n];

		for ( ll i = 0; i < n; i++ ) cin >> a[i];

		sort( a, a+n );

		for ( ll i = 0; i < 63; i++ ) {
			for ( ll j = 0; j < n; j++ ) {
				if ( !( a[j] & ( 1LL << i ) ) ) {
					if ( ( 1LL << i ) <= k ) {
						a[j] += ( 1LL << i );
						k -= ( 1LL << i );
					}
				}
			}
		}

		int cnt = 0;

		for ( ll i = 0; i < n; i++ ) {
			for ( ll j = 0; j < 63; j++ ) {
				if ( a[i] & ( 1LL << j ) ) cnt++;
			}
		}

		cout << cnt << "\n";
	}

	return 0;
}