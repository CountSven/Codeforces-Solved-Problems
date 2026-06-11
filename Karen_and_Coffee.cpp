#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	ll n, k, q;
	cin >> n >> k >> q;

	vector<ll> v( 200005, 0 );

	while ( n-- ) {
		ll l, r;
		cin >> l >> r;
		v[l]++;
		v[r+1]--;
	}

	for ( ll i = 0, cur = 0; i <= 200002; i++ ) {
		cur += v[i];
		v[i] = cur;
	}

	for ( ll i = 1; i <= 200003; i++ ) {
		if ( v[i] < k ) v[i] = 0;
		else v[i] = 1;
		v[i] += v[i-1];
	}

	// for ( ll i = 90; i <= 100; i++ ) cout << v[i] << " ";
	// cout << "\n";
	// for ( ll i = 90; i <= 100; i++ ) cout << i << " ";
	// cout << "\n";

	while ( q-- ) {
		ll a, b;
		cin >> a >> b;
		cout << v[b] - v[a-1] << "\n";
	}

	return 0;
}