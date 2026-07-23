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

		int l = 1e9, r = 0, x = -1;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			l = min( l, a[i] );
			r = max( r, a[i] );
		}

		while ( l <= r ) {
			int mid = ( l + r ) / 2, f = 0;

			for ( int i = 0; i+1 < n; i++ ) {
				if ( abs( a[i] - mid ) > abs( a[i+1] - mid ) ) {
					if ( a[i] > a[i+1] ) f = 1;
					else f = 2;
					break;
				}
			}

			if ( f == 1 ) l = mid + 1;
			else if ( f == 2 ) r = mid - 1;
			else {
				x = mid;
				break;
			}
		}

		cout << x << "\n";
	}

	return 0;
}