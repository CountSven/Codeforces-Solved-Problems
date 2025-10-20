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

		bool isFnd = false;
		char c = 'X';

		for ( int i = 0; i+1 < s.size(); i++ ) {
			if ( i+1 < s.size() && s[i] == s[i+1] ) {
				c = s[i];
				isFnd = true;
				break;
			}
		}

		if ( isFnd ) cout << c << c << "\n";
		else {
			bool isCur = false;
			string r = "";

			for ( int i = 0; i+2 < s.size(); i++ ) {
				if ( i+2 < s.size() && s[i] != s[i+1] && s[i+1] != s[i+2] && s[i] != s[i+2] ) {
					r += s[i];
					r += s[i+1];
					r += s[i+2];

					isCur = true;
					break;
				}	
			}

			if ( isCur ) cout << r << "\n";
			else cout << -1 << "\n";
		}
	}

	return 0;
}