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
		string s;
		cin >> n >> s;

		map<char, int> mp;

		bool isPos = true;

		for ( int i = 0; i < n; i++ ) {
			mp[s[i]]++;

			if ( mp[s[i]] == 2 ) {
				isPos = false;
				break;
			}
		}

		if ( isPos ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}