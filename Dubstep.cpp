#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	cin >> s;

	for ( int i = 0; i+2 < s.size(); i++ ) {
		if ( s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B' ) {
			s[i] = ' ';
			s[i+1] = ' ';
			s[i+2] = ' ';
		}
	}

	stringstream ss( s );
	string w;

	while ( ss >> w ) cout << w << " ";

	return 0;
}