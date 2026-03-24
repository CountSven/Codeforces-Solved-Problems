#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		string s1, s2;
		cin >> s1 >> s2;

		map<char, int> mp1, mp2;

		for ( int i = 0; i < s1.size(); i++ ) mp1[s1[i]]++;
		for ( int i = 0; i < s2.size(); i++ ) mp2[s2[i]]++;

		int f = 0;

		for ( auto [x, y] : mp1 ) {
			if ( mp2.find( x ) == mp2.end() ) {
				f = 1;
				break;
			}
			else if ( mp2[x] < mp1[x] ) {
				f = 1;
				break;
			}
		}

		if ( f ) cout << "Impossible" << "\n";
		else {
			string r = "";

			for ( char i : s1 ) {
				for ( char c = 'a'; c <= i; c++ ) {
					if ( mp2.find( c ) != mp2.end() ) {
						if ( mp1.find( c ) != mp1.end() ) {
							if ( c == i ) {
								r += c;
								mp2[c]--;
								mp1[c]--;
								continue;
							}
							while ( mp2[c] > mp1[c] ) {
								r += c;
								mp2[c]--;
							}
						}
						else {
							while ( mp2[c] ) {
								r += c;
								mp2[c]--;
							}
						}
					}
				}
				// cout << i << " " << r << "\n";
			}

			for ( char c = 'a'; c <= 'z'; c++ ) {
				while ( mp2[c] ) {
					r += c;
					mp2[c]--;
				}
			}

			cout << r << "\n";
		}
	}

	return 0;
}