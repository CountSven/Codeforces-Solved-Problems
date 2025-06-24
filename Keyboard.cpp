#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	char d;
	cin >> d;

	string s;
	cin >> s;

	string r = "qwertyuiopasdfghjkl;zxcvbnm,./";

	for ( int i = 0; i < s.size(); i++ ) {
		if ( d == 'R' ) cout << r[r.find(s[i]) - 1];
		else cout << r[r.find(s[i]) + 1];
	}

	return 0;
}