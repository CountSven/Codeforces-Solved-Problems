#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, m, k;
		cin >> n >> m >> k;
		vector<vector<int>> pref(n + 2, vector<int>(m + 2, 0));

		for ( int i = 1; i + k - 1 <= n; i++ ) {
			for ( int j = 1; j + k - 1 <= m; j++ ) {
				pref[i][j]++;
				pref[i + k][j]--;
				pref[i][j + k]--;
				pref[i + k][j + k]++;
			}
		}

		for ( int i = 1; i <= n; i++ ) {
			for ( int j = 1; j <= m; j++ ) {
				pref[i][j] += pref[i][j-1];
			}
			for ( int j = 1; j <= m; j++ ) {
				pref[i][j] += pref[i-1][j];
			}
		}

		int w;
		cin >> w;
		vector<int> a(w), cnt;

		for ( int i = 0; i < w; i++ ) cin >> a[i];

		for ( int i = 1; i <= n; i++ ) {
			for ( int j = 1; j <= m; j++ ) {
				cnt.push_back( pref[i][j] );
			}
		}

		sort( a.rbegin(), a.rend() );
		sort( cnt.rbegin(), cnt.rend() );
	
		long long res = 0;

		for ( int i = 0; i < w; i++ ) res += ( 1LL * a[i] * cnt[i] );

		cout << res << "\n";	
	}

	return 0;
}