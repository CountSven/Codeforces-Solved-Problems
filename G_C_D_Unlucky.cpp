#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n;
		cin >> n;
		long long p[n], s[n], a[n];

		for ( int i = 0; i < n; i++ ) cin >> p[i];
		for ( int i = 0; i < n; i++ ) cin >> s[i];

		for ( int i = 0; i < n; i++ ) a[i] = lcm( p[i], s[i] );
		
		// for ( auto u : a ) cout << u << " ";
		// cout << "\n";

		int f = 0;

		if ( a[0] != p[0] ) f = 1;
		if ( a[n-1] != s[n-1] ) f = 1;

		long long g = a[0];

		for ( int i = 1; i < n; i++ ) {
			g = __gcd( g, a[i] );
			if ( g != p[i] ) f = 1;
		}

		g = a[n-1];

		for ( int i = n-2; i >= 0; i-- ) {
			g = __gcd( g, a[i] );
			if ( g != s[i] ) f = 1;
		}

		if ( !f ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}