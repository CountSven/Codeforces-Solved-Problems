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
		long long a[n];

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		long long l = 0, r = 2e14, add = 0;

		while ( l <= r ) {
			long long mid = l + ( r - l ) / 2;
			long long sum = mid, f = 0;

			for ( int i = 0; i+1 < n; i++ ) {
				sum += a[i];
				if ( ( a[i+1] * 100LL ) > ( k * sum ) ) {
					f = 1;
					break;
				}
			}

			if ( !f ) {
				add = mid;
				r = mid - 1;
			}
			else l = mid + 1;
		}

		cout << add << "\n";
	}

	return 0;
}