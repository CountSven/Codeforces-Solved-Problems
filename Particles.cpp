#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, mx = -1e9;
		cin >> n;
		int a[n];

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			mx = max( mx, a[i] );
		}

		if ( mx < 0 ) cout << mx << "\n";
		else {
			long long cur1 = 0, cur2 = 0;

			for ( int i = 0; i < n; i++ ) {
				if ( i % 2 ) cur1 += max( 0, a[i] );
				else cur2 += max( 0, a[i] );
			}

			cout << max( cur1, cur2 ) << "\n";
		}
	}

	return 0;
}