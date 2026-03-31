#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	cin >> s;

	map<char, int> mp;

	for ( int i = 0; i < (int)s.size(); i++ ) mp[s[i]]++;

	int oddCnt = 0;
	
	for ( auto [x, y] : mp ) {
		if ( y % 2 ) oddCnt++;
	}

	if ( oddCnt <= 1 || oddCnt % 2 ) cout << "First" << "\n";
	else cout << "Second" << "\n";

	return 0;
}