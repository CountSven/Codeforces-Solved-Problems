#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;
	map<string, string> mp;

	while ( m-- ) {
		string s1, s2;
		cin >> s1 >> s2;
		mp[s1] = s2;
	}

	while ( n-- ) {
		string s;
		cin >> s;

		for ( auto u : mp ) {
			if ( u.first == s ) {
				if ( u.first.size() > u.second.size() ) cout << u.second << " ";
				else cout << u.first << " ";
			}
		}
	}
	cout << "\n";

	return 0;
}