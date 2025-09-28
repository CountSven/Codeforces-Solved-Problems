#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	map<char, int> mp;

	int val = 1;

	for ( char c = 'a'; c <= 'z'; c++ ) mp[c] = val++; 

	// for ( auto u : mp ) cout << u.first << " " << u.second << "\n";

	int n;
	string s;
	cin >> n >> s;

	int l = -1, r = -1;

	for ( int i = 1; i < n; i++ ) {
		if ( mp[s[i]] < mp[s[i-1]] ) {
			l = i;
			r = i+1;
			break;
		}
	}

	if ( l != -1 && r != -1 ) {
		cout << "YES" << "\n";
		cout << l << " " << r << "\n";
	}
	else cout << "NO" << "\n";

	return 0;
}