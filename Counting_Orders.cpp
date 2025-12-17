#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n;
		cin >> n;
		int a[n], b[n];

		for ( int i = 0; i < n; i++ ) cin >> a[i];
		for ( int i = 0; i < n; i++ ) cin >> b[i];

		sort( a, a+n );	
		sort( b, b+n );		

		int cur = 0;
		long long res = 1;

		for ( int i = 0; i < n; i++ ) {
			while ( cur < n && a[i] > b[cur] ) cur++;

			// cout << i << " " << cur << "\n";
			res = ( res * ( cur - i ) ) % mod;
		}

		cout << res << "\n";
	}

	return 0;
}