#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, k;
		cin >> n >> k;
		int a[n+1];

		int val = 0;

		for ( int i = 1; i <= n; i++ ) {
			cin >> a[i];
			if ( i == k ) val = a[i];
		}

		sort( a+1, a+n+1 );

		int st = 1;

		for ( int i = 1; i <= n; i++ ) {
			if ( a[i] == val ) st = i;
		}

		if ( st == n ) cout << "YES" << "\n";
		else {
			long long init = 1;

			int f = 0;

			for ( int i = st; i+1 <= n; i++ ) {
				int cur = a[i+1] - a[i];

				if ( init + cur > a[i] + 1 ) {
					f = 1;
					break;
				}
				else init += cur;
			}

			if ( !f ) cout << "YES" << "\n";
			else cout << "NO" << "\n";
		}
	}

	return 0;
}