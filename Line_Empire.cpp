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
		ll n, a, b;
		cin >> n >> a >> b;
		ll x[n+1];

		ll rem = 0;

		for ( int i = 1; i <= n; i++ ) {
			cin >> x[i];
			rem += x[i];
		}

		ll res = rem * b;
		ll left = 0, last = 0;

		for ( int i = 1; i <= n; i++ ) {
			rem -= x[i];
			left += ( x[i] - last ) * b;
			left += ( x[i] - last ) * a;
			last = x[i];
			ll right = rem - ( ( n - i ) * x[i] );
			right *= b;
			ll cur = left + right;
			// cout << i << " -> " << left << " " << right << "\n";
			res = min( res, cur );
		}

		cout << res << "\n";
	}

	return 0;
}