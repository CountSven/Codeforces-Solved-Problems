#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, x;
		cin >> n >> x;
		int a[n];

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		int mn = 1e9, mx = -1e9, cnt = 0;

		for ( int i = 0; i < n; i++ ) {
			mn = min( mn, a[i] );
			mx = max( mx, a[i] );

			if ( ( mx - mn ) > 2 * x ) {
				cnt++;
				mn = a[i];
				mx = a[i];
			}
		}

		cout << cnt << "\n";
	}

	return 0;
}