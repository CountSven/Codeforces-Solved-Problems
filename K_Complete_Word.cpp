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
		string s;
		cin >> n >> k >> s;

		s = '#' + s;

		int res = 0;

		vector<int> vis( n+1, 0 );
 
		for ( int i = 1; i <= n; i++ ) {
			if ( vis[i] ) continue;
			set<int> st;
			int j = i;
			while ( j <= n ) {
				vis[j] = 1;
				vis[n-j+1] = 1;
				st.insert( j );
				st.insert( n-j+1 );
				j += k;
			}
			map<char, int> mp;
			int mx = 0;
			for ( auto u : st ) {
				// cout << u << " ";
				mx = max( mx, ++mp[s[u]] );
			}
			// cout << "\n";
			res += st.size() - mx;
		}

		cout << res << "\n";
	}

	return 0;
}