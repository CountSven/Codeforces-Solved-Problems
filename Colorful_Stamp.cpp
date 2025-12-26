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
		string s;
		cin >> n >> s;

		int b = 0, r = 0, f = 0;

		for ( int i = 0; i < n; i++ ) {
			if ( s[i] == 'W' && b != r ) {
				f = 1;
				break;
			}
			else if ( s[i] == 'W' && b == r ) {
				b = 0;
				r = 0;
			}
			else if ( s[i] == 'B' ) b = 1;
			else if ( s[i] == 'R' ) r = 1;
		}

		if ( b != r ) f = 1;

		if ( !f ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}