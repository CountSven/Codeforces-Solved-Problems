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
		string s;
		cin >> s;

		vector<char> a, b;

		a.push_back( '1' );
		b.push_back( '1' );

		int f = 0;

		for ( int i = 1; i < n; i++ ) {
			if ( f ) {
				a.push_back( '0' );
				b.push_back( s[i] );
			}
			else if ( s[i] == '2' ) {
				a.push_back( '1' );
				b.push_back( '1' );
			}
			else if ( s[i] == '1' ) {
				a.push_back( '1' );
				b.push_back( '0' );
				f = 1;
			}
			else {
				a.push_back( '0' );
				b.push_back( '0' );
			}
		}

		for ( auto u : a ) cout << u;
		cout << "\n";
		for ( auto u : b ) cout << u;
		cout << "\n";
	}

	return 0;
}