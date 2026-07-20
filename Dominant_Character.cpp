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

		int sz = -1;

		for ( int len = 2; len <= 7; len++ ) {
			if ( sz > 0 ) break;
			for ( int i = 0; i+len <= n; i++ ) {
				if ( sz > 0 ) break;
				map<char, int> mp;
				for ( int j = i, cur = 0; j < n && cur < len; j++, cur++ ) mp[s[j]]++;
				if ( mp['a'] > mp['b'] && mp['a'] > mp['c'] ) {
					sz = len;
					break;
				}
			}
		}

		cout << sz << "\n";
	} 

	return 0;
}