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
		int a[n], b[n], c[n];

		for ( int i = 0; i < n; i++ ) cin >> a[i];
		for ( int i = 0; i < n; i++ ) cin >> b[i];
		for ( int i = 0; i < n; i++ ) cin >> c[i];

		vector<pair<int, int>> va, vb, vc;
		
		int mx = 0;

		for ( int i = 0; i < n; i++ ) mx = max( mx, a[i] );
		for ( int i = 0; i < n; i++ ) {
			if ( a[i] == mx ) {
				va.push_back( { i, a[i] } );
				a[i] = 0;
				mx = 0;
				break;
			}
		}

		for ( int i = 0; i < n; i++ ) mx = max( mx, a[i] );
		for ( int i = 0; i < n; i++ ) {
			if ( a[i] == mx ) {
				va.push_back( { i, a[i] } );
				a[i] = 0;
				mx = 0;
				break;
			}
		}

		for ( int i = 0; i < n; i++ ) mx = max( mx, a[i] );
		for ( int i = 0; i < n; i++ ) {
			if ( a[i] == mx ) {
				va.push_back( { i, a[i] } );
				a[i] = 0;
				mx = 0;
				break;
			}
		}

		for ( int i = 0; i < n; i++ ) mx = max( mx, b[i] );
		for ( int i = 0; i < n; i++ ) {
			if ( b[i] == mx ) {
				vb.push_back( { i, b[i] } );
				b[i] = 0;
				mx = 0;
				break;
			}
		}

		for ( int i = 0; i < n; i++ ) mx = max( mx, b[i] );
		for ( int i = 0; i < n; i++ ) {
			if ( b[i] == mx ) {
				vb.push_back( { i, b[i] } );
				b[i] = 0;
				mx = 0;
				break;
			}
		}

		for ( int i = 0; i < n; i++ ) mx = max( mx, b[i] );
		for ( int i = 0; i < n; i++ ) {
			if ( b[i] == mx ) {
				vb.push_back( { i, b[i] } );
				b[i] = 0;
				mx = 0;
				break;
			}
		}

		for ( int i = 0; i < n; i++ ) mx = max( mx, c[i] );
		for ( int i = 0; i < n; i++ ) {
			if ( c[i] == mx ) {
				vc.push_back( { i, c[i] } );
				c[i] = 0;
				mx = 0;
				break;
			}
		}

		for ( int i = 0; i < n; i++ ) mx = max( mx, c[i] );
		for ( int i = 0; i < n; i++ ) {
			if ( c[i] == mx ) {
				vc.push_back( { i, c[i] } );
				c[i] = 0;
				mx = 0;
				break;
			}
		}

		for ( int i = 0; i < n; i++ ) mx = max( mx, c[i] );
		for ( int i = 0; i < n; i++ ) {
			if ( c[i] == mx ) {
				vc.push_back( { i, c[i] } );
				c[i] = 0;
				mx = 0;
				break;
			}
		}

		// for ( auto u : va ) cout << u.first << " " << u.second << "\n";
		// cout << "\n";
		// for ( auto u : vb ) cout << u.first << " " << u.second << "\n";
		// cout << "\n";
		// for ( auto u : vc ) cout << u.first << " " << u.second << "\n";
		// cout << "\n";

		long long res = 0;

		for ( int i = 0; i < 3; i++ ) {
			for ( int j = 0; j < 3; j++ ) {
				for ( int k = 0; k < 3; k++ ) {
					if ( va[i].first != vb[j].first && vb[j].first != vc[k].first && vc[k].first != va[i].first ) {
						// cout << va[i].first << " " << vb[j].first << " " <<  vc[k].first << "\n";
						res = max( res, 1LL * va[i].second + vb[j].second + vc[k].second );
					}
				}
			}
		}

		cout << res << "\n";
	}

	return 0;
}