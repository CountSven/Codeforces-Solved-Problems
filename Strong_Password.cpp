#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		string s, l, r;
		int m;
		cin >> s >> m >> l >> r;

		int n = s.size();

		map<char, vector<int>> mp;

		for ( int i = 0; i < n; i++ ) mp[s[i]].push_back( i );

		int pos = -1;

		for ( int i = 0; i < m; i++ ) {
			int cur = pos;
			for ( char j = l[i]; j <= r[i]; j++ ) {
				auto it = upper_bound( mp[j].begin(), mp[j].end(), pos );
				if ( it == mp[j].end() ) cur = n;
				else cur = max( cur, *it );
			}
			pos = max( pos, cur );
		}

		if ( pos == n ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}