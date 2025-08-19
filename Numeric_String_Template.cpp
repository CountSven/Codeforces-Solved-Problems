#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n;
		cin >> n;
		int a[n];

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		int m;
	 	cin >> m;

	 	while ( m-- ) {
	 		string s;
	 		cin >> s;

	 		if ( s.size() != n ) cout << "NO" << "\n";
	 		else {
	 			map<int, char> mp1;
	 			map<char, int> mp2;

	 			bool isPos = true;

	 			for ( int i = 0; i < n; i++ ) {
	 				if ( mp1.find( a[i] ) != mp1.end() && mp1[a[i]] != s[i] ) {
	 					isPos = false;
	 					break;
	 				}
	 				else if ( mp2.find( s[i] ) != mp2.end() && mp2[s[i]] != a[i] ) {
	 					isPos = false;
	 					break;
	 				}
	 				else {
	 					mp1[a[i]] = s[i];
	 					mp2[s[i]] = a[i];
	 				}
	 			}

	 			// for ( auto u : mp1 ) cout << u.first << " " << u.second << "\n";
	 			// cout << "\n";
	 			// for ( auto u : mp2 ) cout << u.first << " " << u.second << "\n";
	 			// cout << "\n";

	 			if ( isPos ) cout << "YES" << "\n";
	 			else cout << "NO" << "\n";
	 		}
	 	}
	}

	return 0;
}