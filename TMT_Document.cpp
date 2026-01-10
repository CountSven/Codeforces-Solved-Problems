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

		int cntT = 0, cntM = 0, f = 0;

		for ( int i = 0; i < n; i++ ) {
			if ( s[i] == 'T' ) cntT++;
			else {
				cntM++;
				if ( cntT < cntM ) f = 1;
			}

			if ( f ) break;
		}

		if ( cntT != ( 2 * cntM ) ) f = 1;

		cntT = 0, cntM = 0;

		reverse( s.begin(), s.end() );

		if ( !f ) {
			for ( int i = 0; i < n; i++ ) {
				if ( s[i] == 'T' ) cntT++;
				else {
					cntM++;
					if ( cntT < cntM ) f = 1;
				}

				if ( f ) break;
			}
		}

		if ( !f ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}