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
		vector<ll> a(n);

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		sort( a.begin(), a.end() );

		ll l = 0, r = 2e12, res = 2e12; 

		while ( l <= r ) {
			ll mid = l + ( r - l ) / 2;
			ll cur = LLONG_MIN, cnt = 0;

			for ( int i = 0; i < n; i++ ) {
				if ( llabs( a[i] - cur ) > mid ) {
					cur = a[i] + mid;
					cnt++;
				}
			}

			if ( cnt <= 3 ) {
				res = mid;
				r = mid - 1;
			}
			else l = mid + 1;
		}

		cout << res << "\n";
	}

	return 0;
}