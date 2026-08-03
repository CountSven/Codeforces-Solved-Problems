#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string s, t;
	cin >> s >> t;

	int n = s.size(), m = t.size(), j = 0;

	for ( int i = 0; i < n; i++ ) {
		if ( s[i] == t[j] ) j++;
		if ( j == m ) {
			cout << "automaton" << "\n";
			return 0;
		}
	}

	sort( s.begin(), s.end() );
	sort( t.begin(), t.end() );

	if ( s == t ) {
		cout << "array" << "\n";
		return 0;
	}

	map<char, int> have, need;

	for ( char c : s ) have[c]++;
	for ( char c : t ) need[c]++;

	for ( auto [x, y] : need ) {
		if ( y > have[x] ) {
			cout << "need tree" << "\n";
			return 0;
		}
	}

	cout << "both" << "\n";

	return 0;
}