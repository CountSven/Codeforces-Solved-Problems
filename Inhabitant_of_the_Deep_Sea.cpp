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
		long long k;
		cin >> n >> k;
		int a[n];

		long long sum = 0;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			sum += a[i];
		}

		if ( k >= sum ) cout << n << "\n";
		else {
			int i = 0, j = n-1;

			while ( k ) {
				int mn = min( a[i], a[j] );

				if ( k >= ( mn * 2LL ) ) {
					k -= ( mn * 2LL );
					a[i] -= mn;
					a[j] -= mn;
					if ( !a[i] ) i++;
					if ( !a[j] ) j--;
				}
				else if ( k >= ( mn * 2LL ) - 1 ) {
					a[i] -= mn;
					k -= mn;
					a[j] -= k;
					k = 0;
					if ( !a[i] ) i++;
					if ( !a[j] ) j--;
				}
				else break;
			}

			// cout << i << " " << j << "\n";

			int rem = j - i + 1;

			cout << n - rem << "\n";
		}
	}

	return 0;
}