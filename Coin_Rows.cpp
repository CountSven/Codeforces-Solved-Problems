#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int m;
		cin >> m;
		long long a[m+1], b[m+1];

		a[m] = 0LL;
		b[0] = 0LL;

		for ( int i = 0; i < m; i++ ) cin >> a[i];
		for ( int i = 1; i <= m; i++ ) cin >> b[i];

		for ( int i = m-1; i >= 0; i-- ) a[i] += a[i+1];

		for ( int i = 1; i <= m; i++ ) b[i] += b[i-1];

		// for ( int i = 0; i <= m; i++ ) cout << a[i] << " ";
		// cout << "\n";
		// for ( int i = 0; i <= m; i++ ) cout << b[i] << " ";
		// cout << "\n";

		long long bob = 2e12;

		for ( int i = 0; i < m; i++ ) {
			bob = min( bob, max( a[i+1], b[i] ) );
		}

		cout << bob << "\n";
	}

	return 0;
}