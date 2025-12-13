#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int a[14] = { 1111, 1110, 1101, 1100, 1011, 1010, 1001, 1000, 111, 110, 101, 100, 11, 10 };

	int t;
	cin >> t;

	while ( t-- ) {
		int n;
		cin >> n;

		string s = to_string( n );

		int f = 0;

		for ( int i = 0; i < (int)s.size(); i++ ) {
			if ( s[i] != '1' && s[i] != '0' ) {
				f = 1;
				break;
			}
		}

		if ( !f ) cout << "YES" << "\n";
		else {
			int done = 0;

			while ( 1 ) {
				// cout << n << " ";
				int div = 0;

				for ( int i = 0; i < 14; i++ ) {
					if ( n % a[i] == 0 ) {
						n /= a[i];
						div = 1;
						break;
					}
				}

				if ( !div ) break;

				s = to_string( n );

				f = 0;

				for ( int i = 0; i < (int)s.size(); i++ ) {
					if ( s[i] != '1' && s[i] != '0' ) {
						f = 1;
						break;
					}
				}

				if ( !f ) {
					done = 1;
					break;
				}
			}
			// cout << n << "\n";

			if ( done ) cout << "YES" << "\n";
			else cout << "NO" << "\n";
		}
	}

	return 0;
}