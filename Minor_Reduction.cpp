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

		int g10 = -1;

		for ( int i = 0; i+1 < (int)s.size(); i++ ) {
			int fi = s[i] - '0';
			int se = s[i+1] - '0';

			if ( fi + se >= 10 ) g10 = i;
		}

		if ( g10 != -1 ) {
			for ( int i = 0; i+1 < (int)s.size(); i++ ) {
				if ( i == g10 ) {
					int fi = s[i] - '0';
					int se = s[i+1] - '0';

					int cur = fi + se;
					string st = to_string( cur );

					s[i] = st[0];
					s[i+1] = st[1];
				}
			}
		}
		else {
			reverse( s.begin(), s.end() );

			int fi = s[(int)s.size()-1] - '0';
			int se = s[(int)s.size()-2] - '0';
			
			int cur = fi + se;
			string st = to_string( cur );

			s.pop_back();
			s.pop_back();

			s += st;

			reverse( s.begin(), s.end() );
		}

		cout << s << "\n";
	}

	return 0;
}