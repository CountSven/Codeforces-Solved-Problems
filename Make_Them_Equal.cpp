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
		char c;
		cin >> n >> c;
		string s;
		cin >> s;

		vector<int> v( 3e5+5, 0 );

		int f = 0;

		for ( int i = 0; i < n; i++ ) {
			if ( s[i] != c ) {
				v[i+1] = 1;
				f = 1;
			}
		}

		if ( !f ) cout << 0 << "\n";
		else {
			int val = 0;

			for ( int i = n; i >= 1; i-- ) {
				if ( !v[i] ) {
					val = i;
					break;
				}
			}

			if ( !val ) {
				cout << 2 << "\n";
				cout << n - 1 << " " << n << "\n";
			}
			else {
				f = 0;

				for ( int i = 1; i <= n; i++ ) {
					if ( v[i] && i % val == 0 ) {
						f = 1;
						break;
					}
				}

				if ( f ) {
					cout << 2 << "\n";
					cout << n - 1 << " " << n << "\n";
				}
				else {
					cout << 1 << "\n";
					cout << val << "\n";
				}
			}
		}
	}

	return 0;
}