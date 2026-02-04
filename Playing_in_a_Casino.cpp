#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, m;
		cin >> n >> m;
		vector<vector<long long>>a(n, vector<long long>(m));

		for ( int i = 0; i < n; i++ ) {
			for ( int j = 0; j < m; j++ ) cin >> a[i][j];
		}

		long long res = 0;

		for ( int j = 0; j < m; j++ ) {
			vector<long long> v;

			for ( int i = 0; i < n; i++ ) v.push_back( a[i][j] );

			sort( v.begin(), v.end() );

			long long pref = 0, cur = 0, idx = 0;

			for ( long long u : v ) {
				cur += ( u * idx ) - pref;
				pref += u;
				idx++;
			}

			res += cur;
		}

		cout << res << "\n";
	}

	return 0;
}