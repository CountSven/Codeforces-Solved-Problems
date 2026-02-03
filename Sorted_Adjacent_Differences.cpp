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

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		sort( a, a+n );

		int l = 0, r = n - 1, itr = 0;

		while ( l <= r ) {
			if ( itr % 2 == 0 ) b[itr++] = a[r--];
			else b[itr++] = a[l++];
		}

		reverse( b, b+n );

		for ( auto u : b ) cout << u << " ";
		cout << "\n";
	}

	return 0;
}