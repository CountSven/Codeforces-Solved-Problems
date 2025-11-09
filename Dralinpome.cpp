#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	cin >> s;

	map<char, int> mp;

	for ( int i = 0; i < s.size(); i++ ) mp[s[i]]++;

	int cnt = 0;

	for ( auto u : mp ) {
		if ( u.second % 2 ) cnt++; 
	}

	if ( cnt <= 1 ) cout << "yes" << "\n";
	else cout << "no" << "\n";

	return 0;
}