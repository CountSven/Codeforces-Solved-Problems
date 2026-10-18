#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, a, b;
		cin >> n >> a >> b;
		int c[n];

		int g = __gcd( a, b );

		for ( int i = 0; i < n; i++ ) {
			cin >> c[i];
			c[i] %= g;
		}

		sort( c, c+n );

		int mn = c[n-1] - c[0];

		for ( int i = 0; i+1 < n; i++ ) {
			mn = min( mn, c[i] + g - c[i+1] );
		}

		cout << mn << "\n";
	}

	return 0;
}