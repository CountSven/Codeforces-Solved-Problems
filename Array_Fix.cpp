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

		int f = 0;

		if ( n > 1 ) {
			for ( int i = n-2; i >= 0; i-- ) {
				if ( a[i] > a[i+1] ) {
					if ( a[i] < 10 ) {
						f = 1;
						break;
					}
					else {
						int sec = a[i] % 10;
						int fir = ( a[i] / 10 ) % 10;
						// cout << fir << " " << sec << "\n";

						if ( fir <= sec && sec <= a[i+1] ) a[i] = fir;
						else {
							f = 1;
							break;
						} 
					}
				}
			}
		}

		// for ( int i = 0; i < n; i++ ) cout << a[i] << " ";
		// cout << "\n";

		if ( !f ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}
 
	return 0;
}