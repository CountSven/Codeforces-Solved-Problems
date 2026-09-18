#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll f( ll n )
{
	if ( n == 0 || n == 1 ) return 1;
	else return n * f( n-1 );
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<ll> v;

	for ( ll i = 3; ; i++ ) {
		ll cur = f(i);
		if ( cur > 1e12 ) break;
		else v.push_back( cur ); 
		// cout << i << " " << cur << "\n";
	}

	int sz = v.size();

	set<pair<ll, ll>> st;

	for ( int i = 0; i < ( 1 << sz ); i++ ) {
		ll sum = 0, cnt = 0;
		for ( int j = 0; j < sz; j++ ) {
			if ( ( i >> j ) & 1 ) {
				sum += v[j];
				cnt++;
			} 
		}
		st.insert( { sum, cnt } ); 
	}

	// cout << st.size() << "\n";

	int t;
	cin >> t;
	
	while ( t-- ) {
		ll n, cnt = 1e12;
		cin >> n;

		for ( auto [x, y] : st ) {
			if ( x > n ) break;
			ll need = n - x;
			ll tot = __builtin_popcountll( need );
			tot += y;
			cnt = min( cnt, tot );
		}

		if ( cnt == 1e12 ) cout << -1 << "\n";
		else cout << cnt << "\n";
	}

	return 0;
}