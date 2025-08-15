#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, c, d;
		cin >> n >> c >> d;
		vector<long long> a, b(n*n);

		for ( int i = 0; i < n*n; i++ ) cin >> b[i];

		sort( b.begin(), b.end() );

		// for ( auto u : b ) cout << u << " ";
		// cout << "\n";

		for ( int i = 0; i < n; i++ ) {
			for ( int j = 0; j < n; j++ ) {
				a.push_back( b[0] + ( i * c ) + ( j * d ) );
			}
		}

		sort( a.begin(), a.end() );

		if ( a == b ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}