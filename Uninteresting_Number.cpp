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

		int sum = 0, cnt2 = 0, cnt6 = 0;

		for ( int i = 0; i < (int)s.size(); i++ ) {
			sum += ( s[i] - '0' );
			if ( s[i] == '2' ) cnt2++;
			else if ( s[i] == '3' ) cnt6++;
		}

		if ( sum % 9 == 0 ) cout << "YES" << "\n";
		else {
			int req = 9 - ( sum % 9 );
			// cout << req << " " << cnt6 << " " << cnt2 << "\n";

			int f = 0;

			if ( req == 1 ) {
				if ( cnt6 >= 1 && cnt2 >= 2 ) f = 1;
				else if ( cnt2 >= 5 ) f = 1;
			}
			else if ( req == 2 ) {
				if ( cnt2 >= 1 ) f = 1;
			}
			else if ( req == 3 ) {
				if ( cnt6 >= 1 && cnt2 >= 3 ) f = 1;
				else if ( cnt6 >= 2 ) f = 1;
				else if ( cnt2 >= 6 ) f = 1;
			}
			else if ( req == 4 ) {
				if ( cnt2 >= 2 ) f = 1;
			}
			else if ( req == 5 ) {
				if ( cnt6 >= 2 && cnt2 >= 1 ) f = 1;
				else if ( cnt6 >= 1 && cnt2 >= 4 ) f = 1;
				else if ( cnt2 >= 7 ) f = 1;
			}
			else if ( req == 6 ) {
				if ( cnt6 >= 1 ) f = 1;
				else if ( cnt2 >= 3 ) f = 1;
			}
			else if ( req == 7 ) {
				if ( cnt6 >= 2 && cnt2 >= 2 ) f = 1;
				else if ( cnt6 >= 1 && cnt2 >= 5 ) f = 1;
				else if ( cnt2 >= 8 ) f = 1;
			}
			else if ( req == 8 ) {
				if ( cnt6 >= 1 && cnt2 >= 1 ) f = 1;
				else if ( cnt2 >= 4 ) f = 1;
			}

			if ( f ) cout << "YES" << "\n";
			else cout << "NO" << "\n"; 
		}
	}

	return 0;
}