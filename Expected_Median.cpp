#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 2e5+8, MOD = 1e9+7;

ll fact[N], invFact[N];

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

ll ncr( ll n, ll r )
{
	if ( n < r ) return 0;
	return ( ( ( fact[n] * invFact[r] ) % MOD ) * invFact[n - r] ) % MOD;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	fact[0] = 1;
	for ( int i = 1; i < N; i++ ) fact[i] = ( 1LL * i * fact[i - 1] ) % MOD;

	invFact[N - 1] = binpow( fact[N - 1], MOD - 2 );
	for ( int i = N - 2; i >= 0; i-- ) invFact[i] = ( 1LL * ( i + 1 ) * invFact[i + 1] ) % MOD;

	int t;
	cin >> t;

	while ( t-- ) {
		int n, k;
		cin >> n >> k;
		int a[n];

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		int cnt0 = count( a, a+n, 0 );
		int cnt1 = n - cnt0;

		int mn = ( k + 1 ) / 2;

		ll res = 0;

		for ( int sh = mn; sh <= k; sh++ ) {
			if ( sh > cnt1 ) break;
			int fh = k - sh;
			if ( fh > cnt0 ) continue;
			ll sc = ncr( cnt1, sh );
			ll fc = max( 1LL, ncr( cnt0, fh ) );
			ll tot = ( sc * fc ) % MOD;
			res = ( res + tot ) % MOD;	
			// cout << fh << " " << sh << " " << tot << "\n";
		}
		
		cout << res << "\n";
	}

	return 0;
}