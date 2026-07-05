#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	ll a[n];

	map<ll, ll> par;

	for ( int i = 0; i < n; i++ ) {
		cin >> a[i];
		par[a[i]] = -1;
	}

	for ( int i = 0; i < n; i++ ) {
		if ( a[i] % 3 == 0 ) {
			if ( par.find( a[i] / 3 ) != par.end() ) {
				par[a[i] / 3] = a[i];			}
		}
		if ( par.find( a[i] * 2LL ) != par.end() ) {
			par[a[i] * 2LL] = a[i];
		}
	}

	// for ( auto [x, y] : par ) cout << x << " " << y << "\n";

	for ( int i = 0; i < n; i++ ) {
		ll tmp = a[i];
		vector<ll> v;
		while ( 1 ) {
			v.push_back( tmp );
			tmp = par[tmp];
			if ( tmp == -1 ) break;
		}
		if ( (int)v.size() == n ) {
			reverse( v.begin(), v.end() );
			for ( auto u : v ) cout << u << " ";
			cout << "\n";
			break;
		}
	}

	return 0;
}