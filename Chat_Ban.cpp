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

		if ( n == 1 ) {
			cout << 1 << "\n";
			continue;
		}

		long long l = 1, r = n-1;

		while ( l <= r ) {
			long long mid = ( l + r ) / 2;
			long long cur = ( mid * ( mid + 1 ) ) / 2;

			if ( cur >= k ) r = mid - 1;
			else l = mid + 1;
		}

		if ( ( ( ( r + 1 ) * ( r + 2 ) ) / 2 ) >= k ) {
			cout << r + 1 << "\n";
			continue;
		}

		long long have = ( r * ( r + 1 ) ) / 2;
		long long rem = ( n * ( n + 1 ) ) / 2;

		if ( have + rem < k ) {
			cout << r + n << "\n";
			continue;
		}

		long long inHand = r, store;

		l = 0, r = n;

		while ( l <= r ) {
			long long mid = ( l + r ) / 2;
			long long cur = ( mid * ( mid + 1 ) ) / 2;
			long long val = rem - cur;
			// cout << l << " " << r << "\n";
			// cout << val << "\n";

			if ( have + val >= k ) {
				store = n - mid;
				l = mid + 1;
			}
			else r = mid - 1;
		}

		cout << inHand + store << "\n";
	}

	return 0;
}