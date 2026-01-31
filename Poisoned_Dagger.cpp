#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long n, h;
		cin >> n >> h;
		long long a[n];

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		long long low = 0, high = 2e18, res = 2e18;
		
		while ( low <= high ) {
			long long mid = low + ( high - low ) / 2;
			long long cur = 0;
			// cout << low << " " << high << " " << mid << "\n";

			for ( int i = 0; i < n; i++ ) {
				// cout << cur << " ";
				if ( i + 1 < n ) cur += min( mid, a[i+1] - a[i] );
				else cur += mid;
			}
            // cout << cur << "\n";

			if ( cur >= h ) {
				res = mid;
				high = mid-1;
			}
			else low = mid+1;
		}

		cout << res << "\n";
	}

	return 0;
}