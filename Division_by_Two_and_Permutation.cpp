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

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];

			while ( a[i] > n ) a[i] /= 2;
		}

		map<int, int> mp;

		for ( int i = 0; i < n; i++ ) mp[a[i]]++;

		// for ( auto u : mp ) cout << u.first << " " << u.second << "\n";

		sort( a, a+n );		
		reverse( a, a+n );

		// for ( int i = 0; i < n; i++ ) cout << a[i] << " ";
		// cout << "\n";

		for ( int i = 0; i < n; i++ ) {
			if ( mp[a[i]] > 1 ) {
				int val = a[i];

				while ( a[i] > 0 ) {
					a[i] /= 2;
					if ( mp[a[i]] == 0 ) {
						mp[a[i]] = 1;
						break;
					}
				}

				mp[val] = mp[val] - 1;
			}
		}

		sort( a, a+n );

		// for ( int i = 0; i < n; i++ ) cout << a[i] << " ";
		// cout << "\n";

		int f = 0;

		for ( int i = 0; i < n; i++ ) {
			if ( a[i] != i+1 ) {
				f = 1;
				break;
			}
		}

		if ( !f ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}