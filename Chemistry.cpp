#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, k;
		cin >> n >> k;

		string s;
		cin >> s;

		map<char, int> mp;

		for ( int i = 0; i < n; i++ ) mp[s[i]]++;

		int cntOdd = 0;

		for ( auto u : mp ) {
			if ( u.second % 2 ) cntOdd++;
		}

		if ( cntOdd - k <= 1 ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}