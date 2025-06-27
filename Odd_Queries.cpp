#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, q;
		cin >> n >> q;
		int a[n];

		long long initSum = 0;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			initSum += a[i];
			if ( i >= 1 ) a[i] = a[i-1] + a[i];

			// cout << a[i] << " ";
		}
		
		// cout << "\n";

		while ( q-- ) {
			int l, r, k;
			cin >> l >> r >> k;

			long long prefSum; 

			if ( l == 1 ) prefSum = a[r-1];
			else prefSum = a[r-1] - a[l-2];

			long long curSum = initSum - prefSum + ( ( r - l + 1 ) * k );

			// cout << initSum << "\n";
			// cout << prefSum << "\n";
			// cout << curSum << "\n";

			if ( curSum % 2 ) cout << "YES" << "\n";
			else cout << "NO" << "\n"; 
		}
	}

	return 0;
}