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

			long long cur = 1LL * a[n/2] * ( n * 2 ) + 1 - sum;

			if ( cur < 0 ) cout << 0 << "\n";
			else cout << cur << "\n";
		}
	}

	return 0;
}