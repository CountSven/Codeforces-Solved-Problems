#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long n, c;
		cin >> n >> c;
		long long a[n];

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		long long l = 1, r = 1e9, res = 1;

		while ( l <= r ) {
			long long mid = ( l + r ) / 2;

			long long sum = 0;

			for ( int i = 0; i < n; i++ ) {
				long long cur = a[i] + ( 2 * mid );
				sum += ( cur * cur );

				if ( sum > c ) break;
			}

			if ( sum == c ) {
				res = mid;
				break;
			}
			else if ( sum < c ) l = mid + 1;
			else r = mid - 1; 
		}

		cout << res << "\n";
	}

	return 0;
}