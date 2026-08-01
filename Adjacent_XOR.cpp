#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, f = 0;
		cin >> n;
		int a[n], b[n];

		for ( int i = 0; i < n; i++ ) cin >> a[i];
		for ( int i = 0; i < n; i++ ) cin >> b[i];

		if ( a[n-1] != b[n-1] ) f = 1;
		
		for ( int i = n-2; i >= 0; i-- ) {
			if ( f ) break;
			if ( a[i] == b[i] ) continue;
			if ( ( ( a[i] ^ a[i+1] ) == b[i] ) || ( ( a[i] ^ b[i+1] ) == b[i] ) ) continue;
			f = 1;
			// cout << i << " " << f << "\n";
		}

		if ( !f ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}