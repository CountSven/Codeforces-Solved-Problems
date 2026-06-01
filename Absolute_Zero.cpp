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
		int n;
		cin >> n;
		ll a[n];

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		int k = 0, f = 0;

		vector<ll> v;

		while ( k <= 40 ) {
			ll mn = *min_element( a, a+n );
			ll mx = *max_element( a, a+n );

			if ( !mn && !mx ) break;
			else if ( ( mn + mx ) % 2 ) {
				f = 1;
				break;
			}

			ll mid = ( mn + mx ) / 2;

			for ( int i = 0; i < n; i++ ) a[i] = llabs( mid - a[i] );

			v.push_back( mid );
			k++;
		}

		if ( f || k > 40 ) cout << -1 << "\n";
		else {
			cout << k << "\n";
			for ( auto u : v ) cout << u << " ";
			cout << "\n";
		}
	}

	return 0;
}