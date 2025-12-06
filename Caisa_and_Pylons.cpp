#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	int a[n+1];

	for ( int i = 1; i <= n; i++ ) cin >> a[i];

	long long low = 1, high = 1e12, res = 1;

	while ( low <= high ) {
		// cout << res << " ";
		long long mid = low + ( high - low ) / 2;

		long long cur = 0, f = 0;

		for ( int i = 0; i < n; i++ ) {
			if ( i == 0 ) cur += ( mid - a[1] );
			else cur += ( a[i] - a[i+1] );

			if ( cur < 0 ) {
				f = 1;
				break;
			}
		}

		if ( f ) low = mid+1;
		else {
			res = mid;
			high = mid-1;
		}
	}
	// cout << "\n";

	cout << res << "\n";

	return 0;
}