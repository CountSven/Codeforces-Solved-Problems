#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long n, k;
		cin >> n >> k;
		long long a[n], b[n];

		for ( int i = 0; i < n; i++ ) cin >> a[i];
		for ( int i = 0; i < n; i++ ) cin >> b[i];

		long long nes = 0, mxF = 0, ans = 0;

		for ( int i = 0; i < n; i++ ) {
			nes += a[i];
			// cout << nes << " ";

			mxF = max( mxF, b[i] );
			// cout << mxF << " ";

			k--;

			long long cur = nes + ( mxF * k );
			// cout << cur << " ";

			ans = max( ans, cur );

			if ( k == 0 ) break;
		}
		// cout << "\n";

		cout << ans << "\n";
	}

	return 0;
}