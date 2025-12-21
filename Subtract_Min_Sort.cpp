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
		
		for ( int i = 0; i+1 < n; i++ ) {
			if ( a[i] > a[i+1] ) {
				f = 1;
				break;
			}
			else {
				a[i+1] -= a[i];
				a[i] -= a[i];
			}
		}

		// for ( auto u : a ) cout << u << " ";
		// cout << "\n";

		if ( !f ) cout << "YES" << "\n";
		else cout << "NO" << "\n"; 	
	}

	return 0;
}