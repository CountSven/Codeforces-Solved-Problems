#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int q;
		cin >> q;

		ll a1 = 1, a2 = 1, tot1 = 1;

		set<char> st1, st2;

		st1.insert( 'a' );
		st2.insert( 'a' );

		while ( q-- ) {
			ll d, k;
			string s;
			cin >> d >> k >> s;

			if ( st2.size() >= 2 ) {
				cout << "YES" << "\n";
				continue;
			}

			if ( d == 1 ) {
				for ( char c : s ) {
					st1.insert( c );
					if ( c == 'a' ) a1 += k;
					tot1 += k;
				}
			}
			else {
				for ( char c : s ) {
					st2.insert( c );
					if ( c == 'a' ) a2 += k;
				}
			}

			if ( st2.size() >= 2 ) {
				cout << "YES" << "\n";
				continue;
			}

			if ( a1 == tot1 && a1 < a2 ) cout << "YES" << "\n";
			else cout << "NO" << "\n";
		}
	}

	return 0;
}