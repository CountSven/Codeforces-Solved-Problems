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
		int a[n], b[n+1];

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		b[0] = a[0];

		for ( int i = 1; i < n; i++ ) b[i] = lcm( a[i], a[i-1] );

		b[n] = a[n-1];

		// for ( int i = 0; i <= n; i++ ) cout << b[i] << " ";
		// cout << "\n";

		int f = 0;

		for ( int i = 0; i < n; i++ ) {
			if ( __gcd( b[i], b[i+1] ) != a[i] ) {
				f = 1;
				break;
			}
		}

		if ( !f ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}