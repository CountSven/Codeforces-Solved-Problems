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

		int cntS = 0, cntP = 0;

		for ( char c : s ) {
			if ( c == 's' ) cntS++;
			else if ( c == 'p' ) cntP++;
		}

		if ( !cntP && !cntS ) cout << "YES" << "\n";
		else if ( !cntP && cntS ) cout << "YES" << "\n";
		else if ( cntP && !cntS ) cout << "YES" << "\n";
		else {
			if ( s[n-1] == 's' ) cout << "NO" << "\n";
			else {
				int f1 = 1, f2 = 1;

				for ( int i = 0; i+1 < n; i++ ) {
					if ( s[i] == 'p' ) {
						f1 = 0;
						break;
					}
				}

				for ( int i = 1; i < n; i++ ) {
					if ( s[i] == 's' ) {
						f2 = 0;
						break;
					}
				}

				// cout << f1 << " " << f2 << "\n";

				if ( f1 && f2 ) cout << "YES" << "\n";
				else if ( f1 && !f2 ) cout << "YES" << "\n";
				else if ( !f1 && f2 ) cout << "YES" << "\n";
				else cout << "NO" << "\n";
			}  
		} 
	}  

	return 0;
}