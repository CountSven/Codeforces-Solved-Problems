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
		int x[n], y[n];

		for ( int i = 0; i < n; i++ ) cin >> x[i] >> y[i];

		if ( n % 2 ) cout << 1 << "\n";
		else {
			sort( x, x+n );	
			sort( y, y+n );

			int l = ( n / 2 ) - 1;
			int r = n / 2;

			int rng1 = x[r] - x[l] + 1;
			int rng2 = y[r] - y[l] + 1;

			cout << 1LL * rng1 * rng2 << "\n";
		} 
	}

	return 0;
}