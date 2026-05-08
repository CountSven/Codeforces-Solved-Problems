#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, k;
		cin >> n >> k;
		int a[n], h[n];

		for ( int i = 0; i < n; i++ ) cin >> a[i];
		for ( int i = 0; i < n; i++ ) cin >> h[i];

		long long l = 0, sum = 0, res = 0;
		
		for ( int r = 0; r < n; r++ ) {
			sum += a[r];
			if ( !r ) {				
				while ( l <= r && sum > k ) sum -= a[l++];

				if ( l <= r && sum <= k ) res = max( res, r - l + 1 );
			}
			else {
				if ( h[r-1] % h[r] == 0 ) {
					while ( l <= r && sum > k ) sum -= a[l++];

					if ( l <= r && sum <= k ) res = max( res, r - l + 1 );
				}
				else {
					while ( l < r ) sum -= a[l++];

					if ( sum <= k ) res = max( res, r - l + 1 );
				}
			}
			// cout << l << " " << r << " " << sum << "\n";
		}

		cout << res << "\n";
	}

	return 0;
}