#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	map<string, int> mp;

	while ( n-- ) {
		string s;
		cin >> s;
		mp[s]++;
	}

	string cur = "";

	int mx = 0;

	for ( auto u : mp ) {
		if ( u.second > mx ) {
			mx = u.second;
			cur = u.first;
		}
	}

	cout << cur << "\n";

	return 0;
}