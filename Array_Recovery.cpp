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
		vector<int> d(n), v;

		for ( int i = 0; i < n; i++ ) cin >> d[i];

		int f = 0;

		v.push_back( d[0] );

		for ( int i = 1; i < n; i++ ) {
			if ( d[i] != 0 && v.back() - d[i] >= 0 ) {
				f = 1;
				break;
			}
			else v.push_back( v.back() + d[i] );
		}

		if ( f ) cout << -1 << "\n";
		else {
			for ( auto u : v ) cout << u << " ";
			cout << "\n";
		}
	}

	return 0;
}