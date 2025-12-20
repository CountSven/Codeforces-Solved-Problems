#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string s, r = "";
	cin >> s;

	int f = 0;

	for ( int i = 0; i < (int)s.size(); i++ ) {
		if ( s[i] == '0' && !f ) f = 1;
		else r += s[i];
	}

	if ( f ) cout << r << "\n";
	else {
		r.pop_back();
		cout << r << "\n";
	}

	return 0;
}