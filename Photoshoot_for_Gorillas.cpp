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
		vector<vector<int>> v(n + 2, vector<int>(m + 2, 0));

		for ( int i = 1; i <= n; i++ ) {
			for ( int j = 1; j <= m; j++ ) {
				int lb = max( 1, j - k + 1 );
				int rb = min( j, m - k + 1 );
				int ub = max( 1, i - k + 1 );
				int db = min( i, n - k + 1 );
				int rng1 = rb - lb + 1;
				int rng2 = db - ub + 1;
				v[i][j] = rng1 * rng2;
				// cout << v[i][j] << " ";
			}
			// cout << "\n";
		}

		int w;
		cin >> w;
		vector<int> a(w), cnt;

		for ( int i = 0; i < w; i++ ) cin >> a[i];

		for ( int i = 1; i <= n; i++ ) {
			for ( int j = 1; j <= m; j++ ) {
				cnt.push_back( v[i][j] );
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