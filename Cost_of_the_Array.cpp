#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, k;
		cin >> n >> k;
		int a[n];

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		if ( a[1] != 1 ) cout << 1 << "\n";
		else {
			if ( n == k ) {
				int j = 1;

				for ( int i = 1; i < n; i += 2, j++ ) {
					if ( a[i] != j ) break;
				}

				cout << j << "\n";
			}
			else {
				int rng = n - k + 1, f = 0;

				for ( int i = 1; i <= rng; i++ ) {
					if ( a[i] != 1 ) {
						f = 1;
						break;
					}
				}

				if ( f ) cout << 1 << "\n";
				else cout << 2 << "\n";
			}
		} 	
	}

	return 0;
}