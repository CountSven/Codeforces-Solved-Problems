#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	cin >> s;

	int totCap = 0;

	for ( int i = 0; i < s.size(); i++ ) {
		if ( isupper( s[i] ) ) totCap++;
	}

	if ( ( islower( s[0] ) && totCap == s.size()-1 ) || ( islower( s[0] ) && s.size() == 1 ) ) {
		s[0] = toupper( s[0] );

		for ( int i = 1; i < s.size(); i++ ) {
			s[i] = tolower( s[i] );
		}
	}
	else if ( ( totCap == s.size() ) ) {
		for ( int i = 0; i < s.size(); i++ ) s[i] = tolower( s[i] );
	}

	// cout << totCap << "\n";

	cout << s << "\n";

	return 0;
}