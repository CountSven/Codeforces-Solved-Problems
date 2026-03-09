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
		long long a[n+1];

		for ( int i = 1; i <= n; i++ ) cin >> a[i];

		long long up = ( 2 * a[1] ) - a[2];
		long long down = n + 1;

		if ( up < 0 || up % down ) {
			cout << "NO" << "\n";
			continue;
		}

		long long y = up / down;
		
		if ( y - a[1] + a[2] < 0 ) {
			cout << "NO" << "\n";
			continue;
		}

		long long x = y - a[1] + a[2];

		int f = 0;
		
		for ( int i = 1; i <= n; i++ ) {
			if ( a[i] - ( i * x ) - ( ( n - i + 1 ) * y ) != 0 ) {
				f = 1;
				break;
			}
		}

		if ( !f ) cout << "YES" << "\n";
		else cout << "NO" << "\n"; 
	}

	return 0;
}