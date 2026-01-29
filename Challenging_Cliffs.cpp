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

		int mn = 2e9, idx = 0;

		for ( int i = 1; i < n; i++ ) {
			mn = min( mn, a[i] - a[i-1] );

			if ( a[i] - a[i-1] == mn ) idx = i;
		}

		cout << a[idx-1] << " ";

		for ( int i = idx + 1; i < n; i++ ) cout << a[i] << " ";
		for ( int i = 0; i < idx - 1; i++ ) cout << a[i] << " ";

		cout << a[idx] << "\n";	
	}

	return 0;
}