#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n, k;
	string s, t;
	cin >> n >> k >> s >> t;

	vector<int> vis(n);

	set<int> st;

	for ( int i = 0; i + k < n; i++ ) {
		st.insert( i );
		st.insert( i + k );
		vis[i] = 1;
		vis[i + k] = 1;
	}

	vector<int> v1( 26, 0 ), v2( 26, 0 );

	for ( auto u : st ) {
		// cout << u << " ";
		v1[s[u] - 'a']++;
		v2[t[u] - 'a']++;
	}
	// cout << "\n";

	for ( int i = 0; i < 26; i++ ) {
		if ( v1[i] != v2[i] ) {
			cout << "NO" << "\n";
			return;
		}
	}

	for ( int i = 0; i < n; i++ ) {
		if ( vis[i] ) continue;
		if ( s[i] != t[i] ) {
			cout << "NO" << "\n";
			return;
		}
	}

	cout << "YES" << "\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int tt;
	cin >> tt;

	while ( tt-- ) solve();

	return 0;
}