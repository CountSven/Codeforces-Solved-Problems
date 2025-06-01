#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	string s;
	cin >> s;

	map<char, int> mp;

	for ( int i = 0; i < s.size(); i++ ) mp[s[i]]++;

	int cnt = mp.size();

	if ( cnt % 2 ) cout << "IGNORE HIM!" << "\n";
	else cout << "CHAT WITH HER!" << "\n";

	return 0;
}