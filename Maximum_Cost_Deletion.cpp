#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, a, b;
		cin >> n >> a >> b;
		string s;
		cin >> s;

		if ( b >= 0 ) cout << ( n * a ) + ( n * b ) << "\n";
		else {
			int c0 = 0, c1 = 0;

			for ( int i = 0; i < n; i++ ) {
				if ( i == 0 || s[i] != s[i-1] ) {
					if ( s[i] == '0' ) c0++;
					else c1++;
				}
			}

			int mn = min( c0, c1 ) + 1;

			cout << ( n * a ) + ( mn * b ) << "\n";
		}
	}

	return 0;
}