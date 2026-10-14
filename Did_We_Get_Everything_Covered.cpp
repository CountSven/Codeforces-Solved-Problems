#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, k, m;
		string s;
		cin >> n >> k >> m >> s;

		vector<int> pos[26];

		for ( int i = 0; i < m; i++ ) {
			int d = s[i] - 'a';
			pos[d].push_back( i );
		}

		int cur = -1;
		string res = "";
		char c;

		for ( int i = 0; i < n; i++ ) {
			int mx = cur;
			for ( int j = 0; j < k; j++ ) {
				auto it = upper_bound( pos[j].begin(), pos[j].end(), cur );
				if ( it == pos[j].end() ) {
					mx = m;
					c = j + 'a';
				}
				else {
					if ( *it > mx ) {
						mx = *it;
						c = j + 'a';
					}
				}
			}
			cur = mx;
			res += c;
			if ( cur == m ) break;
		}

		while ( res.size() < n ) res += c;

		if ( cur == m ) {
			cout << "NO" << "\n";
			cout << res << "\n";
		}
		else cout << "YES" << "\n";
	}

	return 0;
}