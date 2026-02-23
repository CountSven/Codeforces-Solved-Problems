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

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		sort( a, a+n );

		if ( a[0] != a[1] ) cout << "YES" << "\n";
		else if ( a[0] == 1 && a[1] == 1 ) cout << "NO" << "\n";
		else {
			int f = 0;

			for ( int i = 1; i < n; i++ ) {
				if ( a[i] % a[0] ) {
					f = 1;
					break;
				}
			}

			if ( f ) cout << "YES" << "\n";
			else cout << "NO" << "\n";
		}
	}

	return 0;
}