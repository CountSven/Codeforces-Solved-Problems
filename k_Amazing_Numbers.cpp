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
		cin >> n;
		map<int, vector<int>> mp;

		for ( int i = 1, x; i <= n; i++ ) {
			cin >> x;
			mp[x].push_back( i );
		}

		vector<int> res(n+1, -1);

		for ( auto [x, y] : mp ) {
			vector<int> v = y;
			reverse( v.begin(), v.end() );
			v.push_back( 0 );
			reverse( v.begin(), v.end() );
			v.push_back( n+1 );

			int mx = 0;

			for ( int i = 1; i < v.size(); i++ ) {
				mx = max( mx, v[i] - v[i-1] );
			}

			// cout << x << " " << mx << "\n";

			while( mx <= n && res[mx] == -1 ) res[mx++] = x;
		}

		for ( int i = 1; i <= n; i++ ) cout << res[i] << " \n"[i == n];
	}

	return 0;
}