#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int T;
	cin >> T;

	while ( T-- ) {
		string s, t;
		cin >> s >> t;

		int tl = 0, f = 0;

		for ( int i = 0; i < (int)s.size(); i++ ) {
			if ( s[i] == t[tl] ) tl++;
			else if ( s[i] == '?' ) {
			    s[i] = t[tl];
			    tl++;
			}

			if ( tl == (int)t.size() ) {
				f = 1;
				break;
			}
		}

		if ( f ) {
			cout << "YES" << "\n";
			
			for ( int i = 0; i < (int)s.size(); i++ ) {
				if ( s[i] == '?' ) s[i] = 'x';
			}

			cout << s << "\n";
		}
		else cout << "NO" << "\n";
	}

	return 0;
}