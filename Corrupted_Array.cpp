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
		int a[n+2];

		for ( int i = 0; i < n+2; i++ ) cin >> a[i];

		sort( a, a+n+2 );

		// for ( int i = 0; i < n+2; i++ ) cout << a[i] << " ";
		// cout << "\n";

		long long sum = 0;

		for ( int i = 0; i < n; i++ ) sum += a[i];

		if ( sum == a[n] || sum == a[n+1] ) {
			for ( int i = 0; i < n; i++ ) cout << a[i] << " ";
			cout << "\n";
		}
		else {
			sum += a[n];

			int f = 0;

			for ( int i = 0; i < n; i++ ) {
				sum -= a[i];

				if ( sum == a[n+1] ) {
					a[i] = 0;
					f = 1;
					break;
				}
				else sum += a[i];
			}

			if ( f ) {
				for ( int i = 0; i < n+1; i++ ) {
					if ( a[i] != 0 ) cout << a[i] << " ";
				}
				cout << "\n";
			}
			else cout << -1 << "\n";
		}
	}

	return 0;
}