#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, s;
		cin >> n >> s;
		int a[n];

		int sum = 0;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			sum += a[i];
		}

		if ( sum < s ) cout << -1 << "\n";
		else if ( sum == s ) cout << 0 << "\n";
		else {
			int res = 0, l = 0, r = 0;

			while ( r < n ) {
				s -= a[r++];

				while ( s < 0 ) s += a[l++];

				if ( s == 0 ) res = max( res, r - l + 1 );
			}

			cout << n - res + 1 << "\n";
		}
	}

	return 0;
}