#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long n, x;
		cin >> n >> x;
		long long a[n];

		long long sum = 0, cnt = 0;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			sum += a[i];

			if ( a[i] % x == 0 ) cnt++;
		}

		if ( cnt == n ) cout << -1 << "\n";
		else if ( sum % x ) cout << n << "\n";
		else {
			long long cur = sum, l = 0, r = n-1, res = 0;

			while ( l < n ) {
				cur -= a[l++];

				if ( cur % x ) {
					res = max( res, n - l );
					break;
				}
			}

			cur = sum;

			while ( r >= 0 ) {
				cur -= a[r--];

				if ( cur % x ) {
					res = max( res, r + 1 );
					break;
				}
			}

			cout << res << "\n";
		}
	}

	return 0;
}