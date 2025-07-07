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

		int cntAB = 0, cntBA = 0;

		for ( int i = 0; i < s.size()-1; i++ ) {
			if ( s[i] == 'a' && s[i+1] == 'b' ) cntAB++;
			if ( s[i] == 'b' && s[i+1] == 'a' ) cntBA++;
		}

		if ( cntAB > cntBA ) {
			while ( cntAB != cntBA ) {
				for ( int i = s.size()-1; i > 0; i-- ) {
					if ( s[i] == 'b' && s[i-1] == 'a' ) {
						s[i] = 'a';
						cntAB--;
					}
					else if ( s[i] == 'b' && s[i-1] == 'b' ) {
						s[i] = 'a';
						cntBA++;
					}
					if ( cntAB == cntBA ) break;
				}
			}
		}
		else if ( cntBA > cntAB ) {
			while ( cntAB != cntBA ) {
				for ( int i = s.size()-1; i > 0; i-- ) {
					if ( s[i] == 'a' && s[i-1] == 'b' ) {
						s[i] = 'b';
						cntBA--;
					}
					else if ( s[i] == 'a' && s[i-1] == 'a' ) {
						s[i] = 'b';
						cntAB++;
					}
					if ( cntAB == cntBA ) break;
				}
			}
		}

		cout << s << "\n";
	}

	return 0;
}