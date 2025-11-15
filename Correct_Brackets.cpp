#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	cin >> s;

	int st = 0, lt = 0,brack = 0, f = 0;

	for ( int i = 0; i < s.size(); i++ ) {
		if ( s[i] == '(' ) {
			st++;
			brack++;
		}
		else {
			lt++;
			brack--;
		}

		if ( brack < 0 ) {
			f = 1;
			break;
		}
	}

	if ( !f && st == lt ) cout << "YES" << "\n";
	else cout << "NO" << "\n";

	return 0;
}