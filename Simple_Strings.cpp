#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	cin >> s;

	int n = s.size();

	for ( int i = 0; i+2 < n; i++ ) {
		if ( s[i] == s[i+1] && s[i+1] == s[i+2] ) {
			char c = 'a';
			while ( c == s[i] ) c++;
			s[i+1] = c;
		}
	}

	for ( int i = 1; i < n; i++ ) {
		if ( s[i] == s[i-1] ) {
			char c = 'a';
			while ( c == s[i] || ( i+1 < n && c == s[i+1] ) ) c++;
			s[i] = c;
		}
	}

	cout << s << "\n";

	return 0;
}