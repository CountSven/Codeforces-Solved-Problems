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
		int a[n];

		long long sum = 0;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			sum += a[i];
		}

		if ( n < 3 ) cout << -1 << "\n";
		else {
			sort( a, a+n );

			long long low = 0, high = 1e18, res = 0;

			while ( low <= high ) {
				long long mid = low + ( high - low ) / 2;

				long long cur = sum + mid;

				if ( 1LL * a[n/2] * n * 2 < cur ) {
					res = mid;
					high = mid-1;
				}
				else low = mid+1;
			}

			cout << res << "\n";
		}
	}

	return 0;
}