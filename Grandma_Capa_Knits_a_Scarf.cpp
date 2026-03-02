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

		set<char> st;

		for ( int i = 0; i < n; i++ ) st.insert( s[i] );

		int res = 1e9;

		for ( char c : st ) {
			int l = 0, r = n - 1, cur = 0;

			while ( l < r ) {
				if ( s[l] == s[r] ) {
					l++;
					r--;
				}
				else {
					if ( s[l] == c ) {
						cur++;
						l++;
					}
					else if ( s[r] == c ) {
						cur++;
						r--;
					}
					else {
						cur = 1e9;
						break;
					}
				}

				if ( cur == 1e9 ) break;
			}

			res = min( res, cur );
		}

		if ( res == 1e9 ) cout << -1 << "\n";
		else cout << res << "\n";
	}

	return 0;
}