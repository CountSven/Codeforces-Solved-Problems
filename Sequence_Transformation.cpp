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

		for ( int i = 0; i < n; i++ ) {
			int x;
			cin >> x;
			mp[x].push_back( i + 1 );
		}

		int res = n;

		for ( auto [ u, v ] : mp ) {
			reverse( v.begin(), v.end() );
			v.push_back( 0 );
			reverse( v.begin(), v.end() );
			v.push_back( n + 1 );

			int cnt = 0;

			for ( int i = 1; i < (int)v.size(); i++ ) {
				if ( ( v[i] - v[i-1] - 1 ) > 0 ) cnt++;
			}

			res = min( res, cnt );
		}

		cout << res << "\n";
	}

	return 0;
}