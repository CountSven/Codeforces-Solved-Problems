#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string s1, s2, s, s3;
	cin >> s1 >> s2 >> s;

	s3 = s1 + s2;

	map<char, int> mp1, mp2;

	for ( int i = 0; i < s3.size(); i++ ) mp1[s3[i]]++;
	for ( int i = 0; i < s.size(); i++ ) mp2[s[i]]++;

	if ( mp1 == mp2 ) cout << "YES" << "\n";
	else cout << "NO" << "\n";

	// for ( auto u : mp1 ) cout << u.first << " " << u.second << "\n";
	// cout << "\n";
	// for ( auto u : mp2 ) cout << u.first << " " << u.second << "\n";

	return 0;
}