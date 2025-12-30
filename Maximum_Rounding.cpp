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

		s = '0' + s;

		reverse( s.begin(), s.end() );

		int mxPos = -1;

		for ( int i = 0; i+1 < (int)s.size(); i++ ) {
			int cur = s[i] - '0';
			
			if ( cur >= 5 && s[i+1] != '9' ) {
				int nxt = ( s[i+1] - '0' ) + 1;
				s[i+1] = nxt + '0';
				mxPos = max( mxPos, i );
			}
		}

		for ( int i = 0; i+1 < (int)s.size(); i++ ) {
			if ( i <= mxPos ) s[i] = '0';
		}

		if ( s[s.size()-1] == '0' ) s.pop_back();

		reverse( s.begin(), s.end() );

		cout << s << "\n";		
	}

	return 0;
}