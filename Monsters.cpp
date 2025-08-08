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
		vector<pair<int, int>> v;

		for ( int i = 1; i <= n; i++ ) {
			int x;
			cin >> x;
			x %= k;

			if ( !x ) x = k;
			v.push_back( { -x, i } );
		}

		sort( v.begin(), v.end() );

		for ( auto u : v ) cout << u.second << " ";
		cout << "\n";
	} 

	return 0;
}