#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> pref( 2e5, vector<int>( 26, 0 ) );

int res = 2e5;

void solve( int l, int r, int nl, int nr, int cnt, int cur, int add )
{
	int rng = r - l + 1;
	int have = pref[r][cur] - pref[l-1][cur];
	cnt += rng - have;

	if ( rng == 1 ) {
		have = ( pref[nr][cur+1] - pref[nl-1][cur+1] );
		cnt += rng - have;
		res = min( res, cnt );
		return;
	}

	l = nl, r = nl + add - 1;
	nl = r + 1, nr = r + add;

	// cout << l << " " << r << " -> " << nl << " " << nr << " -> " << cnt << "\n";

	solve( l, r, nl, nr, cnt, cur+1, add / 2 );
	solve( nl, nr, l, r, cnt, cur+1, add / 2 );
}

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

		s = '#' + s;

		for ( int i = 1; i <= n; i++ ) {
			for ( int j = 0; j < 26; j++ ) {
				pref[i][j] = 0;
				pref[i][j] += pref[i-1][j];
			}
			pref[i][( s[i] - '0' ) - 49]++;
		}

		if ( n == 1 ) {
			if ( s[n] == 'a' ) cout << 0 << "\n";
			else cout << 1 << "\n"; 
		}
		else {
			res = 2e5;

			int add = n / 2;
			int l = 1, r = add;
			int nl = r + 1, nr = r + add;

			solve( l, r, nl, nr, 0, 0, add / 2 );
			solve( nl, nr, l, r, 0, 0, add / 2 );

			cout << res << "\n";
		}
	}

	return 0;
}