#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	cin >> s;

	bool isTwoSub = false;

	for ( int i = 0; i < s.size(); i++ ) {
		if ( s[i] == 'A' && s[i+1] == 'B' ) {
			for ( int j = i+2; j < s.size(); j++ ) {
				if ( s[j] == 'B' && s[j+1] == 'A' ) {
					isTwoSub = true;
					break;
				}
			}
		}
	}

	for ( int i = 0; i < s.size(); i++ ) {
		if ( s[i] == 'B' && s[i+1] == 'A' ) {
			for ( int j = i+2; j < s.size(); j++ ) {
				if ( s[j] == 'A' && s[j+1] == 'B' ) {
					isTwoSub = true;
					break;
				}
			}
		}
	}

	if ( isTwoSub ) cout << "YES" << "\n";
	else cout << "NO" << "\n";

	return 0;
}