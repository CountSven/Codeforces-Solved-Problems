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
		int a[n+1];

		map<int, vector<int>> pos;

		for ( int i = 1; i <= n; i++ ) {
			cin >> a[i];
			pos[a[i]].push_back( i );
		}

		int res = 1e9;

		for ( auto [u, v] : pos ) {
			reverse( v.begin(), v.end() );
			v.push_back( 0 );
			reverse( v.begin(), v.end() );
			v.push_back( n + 1 );

			vector<int> diff;

			for ( int i = 1; i < v.size(); i++ ) {
				diff.push_back( v[i] - v[i-1] - 1 );
			}

			sort( diff.rbegin(), diff.rend() );

			int now = 0;

			for ( int i = 1; i < diff.size(); i++ ) now = max( now, diff[i] );
		
			now = max( now, diff[0] / 2 );

			res = min( res, now );
		}

		cout << res << "\n";
	}

	return 0;
}