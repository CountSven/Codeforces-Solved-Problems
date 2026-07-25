#include<bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

const ll rng = 1e16;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		ll n, k;
		cin >> n >> k;
		vector<ll> a(n), v;

		for ( int i = 0; i < n; i++ ) cin >> a[i];
	
		sort( a.rbegin(), a.rend() );

		ll cur = 1;

		map<ll, int> mp;

		while ( cur <= rng ) {
			v.push_back( cur );
			mp[cur] = 0;
			cur *= k;
		}

		reverse( v.begin(), v.end() );

		// for ( auto u : v ) cout << u << " ";
		// cout << "\n";

		int l = 0, f = 0;

		for ( int i = 0; i < n; i++ ) {
			for ( auto u : v ) {
				if ( !mp[u] && a[i] >= u ) {
					a[i] -= u;
					mp[u] = 1;
				}
			}
			if ( a[i] ) {
				f = 1;
				break;
			}
		}

		if ( !f ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}