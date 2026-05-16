#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, m;
		cin >> n >> m;
		long long a[n], b[m];

		for ( int i = 0; i < n; i++ ) cin >> a[i];
		for ( int i = 0; i < m; i++ ) cin >> b[i];
		
		sort( b, b+m );

		a[n-1] = max( a[n-1], b[m-1] - a[n-1] );

		int f = 0;

		for ( int i = n-2; i >= 0; i-- ) {
			int idx = upper_bound( b, b+m, a[i] + a[i+1] ) - b;
			idx--;

			if ( idx >= 0 ) {
				long long mx = max( a[i], b[idx] - a[i] );
				long long mn = min( a[i], b[idx] - a[i] );
				if ( mx <= a[i+1] ) a[i] = mx;
				else a[i] = mn;
			}

			// for ( auto u : a ) cout << u << " ";
			// cout << "\n";
			if ( a[i] > a[i+1] ) {
				f = 1;
				break;
			}
		}

		if ( !f ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}