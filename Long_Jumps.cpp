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
		int a[n+1], b[n+1];

		for ( int i = 1; i <= n; i++ ) cin >> a[i];

		for ( int i = n; i >= 1; i-- ) {
			int cur = i + a[i];

			if ( cur <= n ) b[i] = a[i] + b[cur];
			else b[i] = a[i];
		}

		// for ( int i = 1; i <= n; i++ ) cout << b[i] << " ";
		// cout << "\n";

		int mx = *max_element( b+1, b+n+1 );

		cout << mx << "\n";
	}

	return 0;
}