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
		long long a[n], b[n+1];

		for ( int i = 0; i < n; i++ ) cin >> a[i];
		for ( int i = 0; i < n+1; i++ ) cin >> b[i];

		long long cnt = 1, f = 0, req = 1e9;

		for ( int i = 0; i < n; i++ ) {
			cnt += abs( a[i] - b[i] );

			long long mn = min( a[i], b[i] );
			long long mx = max( a[i], b[i] );

			if ( b[n] >= mn && b[n] <= mx ) f = 1;
		}

		if ( f ) cout << cnt << "\n";
		else {
			for ( int i = 0; i < n; i++ ) {
				long long val1 = abs( a[i] - b[n] );
				long long val2 = abs( b[i] - b[n] );

				req = min( req, min( val1, val2 ) );
			}

			cout << cnt + req << "\n";
		}
	}

	return 0;
}