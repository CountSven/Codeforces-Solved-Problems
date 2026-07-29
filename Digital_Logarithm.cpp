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
		vector<int> a(n), b(n), v1, v2, v11, v22;
		map<int, int> mp1, mp2;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			mp1[a[i]]++;
		}

		for ( int i = 0; i < n; i++ ) {
			cin >> b[i];
			mp2[b[i]]++;
		}

		for ( auto [x, y] : mp1 ) {
			int tmp;
			if ( mp2.find( x ) == mp2.end() ) {
				tmp = y;
				while ( tmp-- ) v1.push_back( x );
			}
			else {
				int mx = max( y, mp2[x] );
				int mn = min( y, mp2[x] );
				tmp = mx - mn;
				if ( mx == y ) {
					while ( tmp-- ) v1.push_back( x );
				}
				else {
					while ( tmp-- ) v2.push_back( x );
				}
			}
		}

		for ( auto [x, y] : mp2 ) {
			if ( mp1.find( x ) != mp1.end() ) continue;
			else {
				int tmp = y;
				while ( tmp-- ) v2.push_back( x );
			}
		}

		// for ( auto u : v1 ) cout << u << " ";
		// cout << "\n";
		// for ( auto u : v2 ) cout << u << " ";
		// cout << "\n";

		mp1.clear();
		mp2.clear();

		int cnt = 0;

		for ( auto &u : v1 ) {
			string s = to_string( u );
			int sz = (int)s.size();
			if ( sz > 1 ) {
				u = sz;
				cnt++;
			}
			mp1[u]++;
		}

		for ( auto &u : v2 ) {
			string s = to_string( u );
			int sz = (int)s.size();
			if ( sz > 1 ) {
				u = sz;
				cnt++;
			}
			mp2[u]++;
		}

		// for ( auto u : v1 ) cout << u << " ";
		// cout << "\n";
		// for ( auto u : v2 ) cout << u << " ";
		// cout << "\n";

		for ( auto [x, y] : mp1 ) {
			int tmp;
			if ( mp2.find( x ) == mp2.end() ) {
				tmp = y;
				while ( tmp-- ) v11.push_back( x );
			}
			else {
				int mx = max( y, mp2[x] );
				int mn = min( y, mp2[x] );
				tmp = mx - mn;
				if ( mx == y ) {
					while ( tmp-- ) v11.push_back( x );
				}
				else {
					while ( tmp-- ) v22.push_back( x );
				}
			}
		}

		for ( auto [x, y] : mp2 ) {
			if ( mp1.find( x ) != mp1.end() ) continue;
			else {
				int tmp = y;
				while ( tmp-- ) v22.push_back( x );
			}
		}

		// for ( auto u : v11 ) cout << u << " ";
		// cout << "\n";
		// for ( auto u : v22 ) cout << u << " ";
		// cout << "\n";

		for ( auto u : v11 ) {
			if ( u > 1 ) cnt++;
		}

		for ( auto u : v22 ) {
			if ( u > 1 ) cnt++;
		}

		cout << cnt << "\n";
	}

	return 0;
}