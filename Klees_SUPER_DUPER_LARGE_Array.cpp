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

		ll tot = ( ( k + n - 1 ) * ( k + n ) ) / 2;
		ll del = ( ( k - 1 ) * k ) / 2;
		tot -= del;
		ll l = k, r = k + n - 1, res = 2e18;

		while ( l <= r ) {
			ll mid = ( l + r ) / 2;
			ll cur = ( mid * ( mid + 1 ) ) / 2;
			cur -= del;
			ll rem = tot - cur;
			ll diff = abs( cur - rem );
			res = min( res, diff );
			// cout << mid << " -> " << cur << " " << rem << "\n";
			if ( cur < rem ) l = mid + 1;
			else if ( cur > rem ) r = mid - 1;
			else break;
		}

		cout << res << "\n";
	}

	return 0;
}