#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const ll N = 2e5+8, MOD = 1e9+7;
ll inv[N], finv[N], fact[N];

ll ncr( ll n, ll r )
{
	if ( r > n ) return 0;
	ll a = ( finv[r] * finv[n - r] ) % MOD;
	return ( a * fact[n] ) % MOD;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	inv[0] = inv[1] = finv[0] = finv[1] = fact[0] = fact[1] = 1;

	for ( int i = 2; i < N; i++ ) {
		inv[i] = inv[MOD % i] * ( MOD - MOD / i ) % MOD;
		finv[i] = ( finv[i - 1] * inv[i] ) % MOD;
		fact[i] = ( fact[i - 1] * i ) % MOD;
	}

	int t;
	cin >> t;

	while ( t-- ) {
		ll n, m, k;
		cin >> n >> m >> k;
		int a[n];

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		sort( a, a+n );

		ll cnt = 0;

		for ( int i = 0; i+m <= n; i++ ) {
			int idx = upper_bound( a, a+n, a[i] + k ) - a;
			idx--;
			ll len = idx - i + 1;
			ll tot = ncr( len - 1, m - 1 );
			cnt = ( cnt + tot ) % MOD;
		}

		cout << cnt << "\n";
	}

	return 0;
}