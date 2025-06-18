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
		vector<int> v(n), vE, vO;

		for ( int i = 0; i < n; i++ ) {
			cin >> v[i];
			if ( v[i] % 2 ) vO.push_back( v[i] );
			else vE.push_back( v[i] );
		}

		sort( vE.rbegin(), vE.rend() );
		sort( vO.rbegin(), vO.rend() );

		for ( int i = 0; i < vO.size(); i++ ) vE.push_back( vO[i] );

		int cnt = 0;

		// for ( auto u : vE ) cout << u << " ";
		// cout << "\n";

		for ( int i = 0; i < n-1; i++ ) {
			for ( int j = i+1; j < n; j++ ) {
				// cout << vE[i] << " " << vE[j] << "\n";
				if ( __gcd( vE[i], 2*vE[j] ) > 1 ) cnt++;
			}
		}

		cout << cnt << "\n";
	}

	return 0;
}