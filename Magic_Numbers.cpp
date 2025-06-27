#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	cin >> s;

	bool isMN = true;

	for ( int i = 0; i < s.size(); i++ ) {
		if ( s[i] != '1' && s[i] != '4' ) {
			isMN = false;
			break;
		}
	}

	if ( ( !( isMN ) ) || s[0] == '4' ) cout << "NO" << "\n";
	else {
		bool isCurSt = true;

		for ( int i = 0; i < s.size(); i++ ) {
			if ( i-2 > 0 && s[i] == '4' && s[i-1] == '4' && s[i-2] == '4' ) {
				isCurSt = false;
				break;
			}
		}

		if ( isCurSt ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}