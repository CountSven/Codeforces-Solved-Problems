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
		cin >> n >> k;
		vector<int> a(n), v, res(n);

		map<int, int> mp;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			mp[a[i]]++;
		}

		map<int, vector<int>> idx;

		for ( auto [x, y] : mp ) {
			if ( y >= k ) {
				for ( int i = 1; i <= k; i++ ) idx[x].push_back( i );
			}
			else {
				int tmp = y;
				while ( tmp-- ) v.push_back( x );
			}
		}

		int rng = v.size() - ( v.size() % k );

		for ( int i = 0, col = 1; i < rng; i++, col++ ) {
			if ( col > k ) col = 1;
			idx[v[i]].push_back( col );
		}

		for ( int i = 0; i < n; i++ ) {
			if ( !idx[a[i]].size() ) res[i] = 0;
			else {
				res[i] = idx[a[i]].back();
				idx[a[i]].pop_back();
			}
		}

		for ( int i = 0; i < n; i++ ) cout << res[i] << " \n"[i + 1 == n];
	}

	return 0;
}