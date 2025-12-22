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

		sort( a, a + n );
		
		long long cur = 1;

		int f = 0;

		for ( int i = 0; i < n; i++ ) {
			if ( cur < a[i] ) {
				f = 1;
				break;
			}
			else {
				if ( i != 0 ) cur += a[i];
			}
		}

		if ( !f ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}