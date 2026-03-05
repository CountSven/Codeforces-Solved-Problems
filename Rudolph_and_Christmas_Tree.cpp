#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, d, h;
		cin >> n >> d >> h;
		int a[n];

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		long long tot = 1LL * n * d * h;

		long double area = ( 1.0 ) * tot / 2, div = ( 1.0 ) * d / h;

		// cout << area << " " << div << "\n";

		for ( int i = 1; i < n; i++ ) {
			if ( a[i] - a[i-1] < h ) {
				int less = h - ( a[i] - a[i-1] );
				long double cur = ( 1.0 ) * ( less * ( less * div ) ) / 2;
				// cout << cur << "\n";
				area -= cur;
			}
		}

		cout << fixed << setprecision(12) << area << "\n";
	}

	return 0;
}