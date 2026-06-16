#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		string s;
		cin >> s;

		int n = (int)s.size();

		int r0 = 0, r1 = 0, l0 = 0, l1 = 0;

		for ( int i = 0; i < n; i++ ) {
			if ( s[i] == '0' ) r0++;
			else r1++;
		}

		int res = min( r0, r1 );

		for ( int i = 0; i < n; i++ ) {
			if ( s[i] == '0' ) {
				r0--;
				l0++;
			}
			else {
				r1--;
				l1++;
			}
			res = min( res, l0 + r1 );
			res = min( res, l1 + r0 );
		}

		cout << res << "\n";
	}

	return 0;
}