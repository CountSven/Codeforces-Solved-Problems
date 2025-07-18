#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	while ( n-- ) {
		string s, t;
		cin >> s >> t;

		int ssz = s.size();
		int tsz = t.size();

		bool isPos = true;

		map<char, int> mp;

		for ( int i = 0; i < ssz; i++ ) mp[s[i]]++;

		for ( int i = 0; i < tsz; i++ ) {
			if ( mp[t[i]] == 0 ) {
				isPos = false;
				break;
			}
		}

		if ( !( isPos ) ) cout << "NO" << "\n";
		else {
			map<char, int> mpCur;

			for ( int i = 0; i < tsz; i++ ) mpCur[t[i]]++;

			string cur;

			for ( int i = ssz-1; i >= 0; i-- ) {
				if ( mpCur[s[i]] > 0 ) {
					cur += s[i];
					mpCur[s[i]]--;
				}
			}

			reverse( cur.begin(), cur.end() );

			// cout << cur << "\n";

			if ( cur == t ) cout << "YES" << "\n";
			else cout << "NO" << "\n";
		}
	}

	return 0;
}