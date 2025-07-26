#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	cin >> s;

	string r;

	bool isH = false, isE = false, isL1 = false, isL2 = false, isO = false;

	for ( int i = 0; i < s.size(); i++ ) {
		if ( s[i] == 'h' && !isH ) {
			r += s[i];
			isH = true;
		}
		else if ( s[i] == 'e' && isH && !isE ) {
			r += s[i];
			isE = true;
		}
		else if ( s[i] == 'l' && isH && isE && !isL1 ) {
			r += s[i];
			isL1 = true;
		}
		else if ( s[i] == 'l' && isH && isE && isL1 && !isL2 ) {
			r += s[i];
			isL2 = true;
		}
		else if ( s[i] == 'o' && isH && isE && isL1 && isL2 && !isO ) {
			r += s[i];
			isO = true;
		}
	}

	// cout << r << "\n";

	if ( r == "hello" ) cout << "YES" << "\n";
	else cout << "NO" << "\n";

	return 0;
}