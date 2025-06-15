#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	cin >> s;

	int h = 0, q = 0, nine = 0;

	for ( int i = 0; i < s.size(); i++ ) {
		if ( s[i] == 'H' ) h++;
		else if ( s[i] == 'Q' ) q++;
		else if ( s[i] == '9' ) nine++;
	}

	if ( h >=1 || q >=1 || nine >=1 ) cout << "YES" << "\n";
	else cout << "NO" << "\n";

	return 0;
}