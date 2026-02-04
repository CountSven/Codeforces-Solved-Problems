#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, q;
		cin >> n >> q;
		string a, b;
		cin >> a >> b;

		vector<vector<int>> pref( n+1, vector<int>( 26, 0 ) );

		for ( int i = 0; i < n; i++ ) {
			pref[i+1] = pref[i];
			pref[i+1][a[i] - 'a']++;
			pref[i+1][b[i] - 'a']--;
		}

		while ( q-- ) {
			int l, r;
			cin >> l >> r;

			int res = 0;

			for ( int i = 0; i < 26; i++ ) res += max( 0, pref[r][i] - pref[l-1][i] );

			cout << res << "\n";
		}
	}

	return 0;
}