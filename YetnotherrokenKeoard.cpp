#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		string s, r;
		cin >> s;

		int l = 0, u = 0;

		for ( int i = s.size()-1; i >= 0; i-- ) {
			if ( s[i] == 'b' ) l++;
			else if ( s[i] == 'B' ) u++;
			else if ( islower( s[i] ) ) {
				if ( l > 0 ) l--;
				else r.push_back( s[i] );
			}
			else {
				if ( u > 0 ) u--;
				else r.push_back( s[i] );
			}
		}

		reverse( r.begin(), r.end() );

		cout << r << "\n";
	}

	return 0;
}