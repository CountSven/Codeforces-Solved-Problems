#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long a, b, n;
		cin >> a >> b >> n;
		long long p[n], q[n];

		long long mx = 0, sum = 0;

		for ( int i = 0; i < n; i++ ) {
			cin >> p[i];
			mx = max( mx, p[i] );
		}

		for ( int i = 0; i < n; i++ ) {
			cin >> q[i];
			if ( q[i] % a == 0 ) sum += ( ( q[i] / a ) * p[i] );
			else sum += ( ( q[i] / a + 1 ) * p[i] );
		}

		sum -= mx;

		if ( sum < b ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}