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

		map<string, int> mp;

		bool isFnd = false;

		for ( int i = 0; i < n-1; i++ ) {
			string cur;
			cur += s[i];
			cur += s[i+1];

			if ( mp.find( cur ) == mp.end() ) mp[cur] = i;
			else {
				if ( i - mp[cur] > 1 ) {
					isFnd = true;
					break;
				}
			}

			if ( isFnd ) break;
		}

		if ( isFnd ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}