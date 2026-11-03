#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = 998244353;

ll binpow( ll a, ll b )
{
	ll ret = 1;

	while ( b ) {
		if ( b % 2 ) ret = ( ret * a ) % MOD;
		a = ( a * a ) % MOD;
		b /= 2;
	}

	return ret;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n;
		cin >> n;
		vector<int> a(n+1), pref(n+1);

		for ( int i = 1; i <= n; i++ ) {
			cin >> a[i];
			pref[i] += pref[i-1] + ( a[i] == 2 );
		}

		ll sum = 0, cnt = 0;

		for ( int i = 1; i <= n; i++ ) {
			if ( a[i] == 3 ) {
				ll cur = binpow( 2, pref[i] );
				sum = ( sum + cur ) % MOD;
				cnt++;
			}
		}

		ll res = 0;

		for ( int i = 1; i <= n; i++ ) {
			if ( a[i] == 1 ) {
				ll cur = binpow( 2, pref[i] );
				ll inv = binpow( cur, MOD - 2 );
				ll tot = ( sum * inv ) % MOD;
				tot = ( tot - cnt + MOD ) % MOD;
				res = ( res + tot ) % MOD;
			}
			if ( a[i] == 3 ) {
				ll cur = binpow( 2, pref[i] );
				sum = ( sum - cur ) % MOD;
				cnt--;
			}
		}

		cout << res << "\n";
	}

	return 0;
}