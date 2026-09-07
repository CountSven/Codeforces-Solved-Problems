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

		int x = 0;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			x ^= a[i];
		}

		if ( !x ) cout << "YES" << "\n";
		else {
			int lx = 0, l = 0, rx = 0, r = n-1;

			for ( ; l < n; l++ ) {
				lx ^= a[l];
				if ( lx == x ) break;
			}

			for ( ; r >= 0; r-- ) {
				rx ^= a[r];
				if ( rx == x ) break;
			}

			if ( l+1 < r ) cout << "YES" << "\n";
			else cout << "NO" << "\n";
		}
	}

	return 0;
}