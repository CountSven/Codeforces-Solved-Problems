#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	cin >> s;

	int n = s.size();

	int idx = -1;

	for ( int i = 0; i < n; i++ ) {
		if ( s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ) idx = i;
	}

	if ( idx == -1 ) cout << s << "\n";
	else {
		string cur = "";

		for ( int i = 0; i <= idx; i++ ) cur += s[i];

		cur += "ntry";

		cout << cur << "\n";
	}

	return 0;
}