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

		int cur = 0, f = 1;
		string r;

		for ( int i = 0; i < n; i++ ) {
			set<char> st;
			char last = '#';
			while ( st.size() < k && cur < s.size() ) {
				if ( !st.count( s[cur] ) ) last = s[cur];
				st.insert( s[cur] );
				cur++;
			}
			if ( st.size() < k ) {
				f = 0;
				for ( int a = 0; a < k; a++ ) {
					if ( !st.count( 'a' + a ) ) last = 'a' + a;
				}
			}
			r += last;
		}

		if ( f ) cout << "YES" << "\n";
		else {
			cout << "NO" << "\n";
			cout << r << "\n";
		}
	}

	return 0;
}