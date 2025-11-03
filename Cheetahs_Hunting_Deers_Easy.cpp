#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, m;
		cin >> n >> m;
		vector<int> a(n), b(m);

		for ( int i = 0; i < n; i++ ) cin >> a[i];
		for ( int i = 0; i < m; i++ ) cin >> b[i];

		sort( a.begin(), a.end() );
		sort( b.begin(), b.end() );

		int mx = a[n-1], idx = -1;

		for ( int i = 0; i < m; i++ ) {
			if ( b[i] < mx ) idx = i;
		}

		int r = n-1;

		if ( r > idx || n > m ) cout << "No" << "\n";
		else {
			int cnt = 0;

			while ( r >= 0 && idx >= 0 ) {
				// cout << b[idx] << " " << a[r] << "\n";

				if ( b[idx] < a[r] ) {
					cnt++;
					r--;
				}
				idx--;
			}

			if ( cnt >= n ) cout << "Yes" << "\n";
			else cout << "No" << "\n";
		}
	}

	return 0;
}