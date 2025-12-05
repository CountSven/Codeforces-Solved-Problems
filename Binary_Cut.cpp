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

		int seq = 1;
		char last = s[0];

		for ( int i = 1; i < (int)s.size(); i++ ) {
			if ( s[i] != last ) seq++;
			last = s[i];
		}

		// cout << seq << "\n";

		if ( seq == 2 && s[0] == '1' ) cout << 2 << "\n";
		else if ( seq == 2 && s[0] == '0' ) cout << 1 << "\n";
		else cout << max( 1, seq-1 ) << "\n";
	}

	return 0;
}