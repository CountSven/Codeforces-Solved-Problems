#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	string s;
	cin >> s;

	map<string, int> mp;

	for ( int i = 0; i < s.size()-1; i++ ) {
		string tmp;
		tmp += s[i];
		tmp += s[i+1];
		mp[tmp]++;
	}
		
	string r;

	int mx = 1;

	for ( auto u : mp ) {
		mx = max( mx, u.second );
		if ( u.second == mx ) r = u.first;
	}

	// for ( auto u : mp ) cout << u.first << " " << u.second << "\n";

	cout << r << "\n";

	return 0;
}