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
		long long a[n], b[n], c[n];

		for ( int i = 0; i < n; i++ ) cin >> a[i];
		for ( int i = 0; i < n; i++ ) cin >> b[i];

		for ( int i = 0; i < n; i++ ) c[i] = b[i] - a[i];

		sort( c, c+n );
		
		// for ( auto u : c ) cout << u << " ";
		// cout << "\n";

		int l = 0, r = n-1, cnt = 0;

		while ( l < r ) {
			// cout << l << " " << r << "\n";
			if ( c[l] + c[r] >= 0LL ) {
				cnt++;
				l++;
				r--;
			}
			else l++;
		}

		cout << cnt << "\n";
	}

	return 0;
}