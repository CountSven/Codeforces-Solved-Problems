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
		int a[n], b[n];

		int mn = INT_MAX, f = 0;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			mn = min( mn, a[i] );
			b[i] = a[i];
		}

		sort( b, b+n );

		for ( int i = 0; i < n; i++ ) {
			if ( a[i] != b[i] && a[i] % mn ) {
				f = 1;
				break;
			}
		}

		if ( !f ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}