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
		vector<int> freq( 30, 0 );

		for ( int i = 0; i < n; i++ ) {
			int x;
			cin >> x;
			for ( int j = 0; j < 30; j++ ) {
				if ( x & ( 1 << j ) ) freq[j]++;
			}
		}

		int g = 0;

		for ( int i = 0; i < 30; i++ ) g = __gcd( g, freq[i] );

		// cout << g << "\n";

		if ( !g ) {
			for ( int i = 1; i <= n; i++ ) cout << i << " ";
			cout << "\n";
		}
		else {
			set<int> divs;

			for ( int i = 1; i*i <= g; i++ ) {
				if ( g % i == 0 ) {
					divs.insert( i );
					divs.insert( g / i );
				}
			}

			for ( auto u : divs ) cout << u << " ";
			cout << "\n";
		}
	}

	return 0;
}