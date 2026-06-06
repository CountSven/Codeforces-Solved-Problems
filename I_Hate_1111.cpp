#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> v = { 111111111, 11111111, 1111111, 111111, 11111, 1111, 111, 11 };
	reverse( v.begin(), v.end() );

	int t;
	cin >> t;

	while ( t-- ) {
		int x, f = 0;
		cin >> x;

		while ( x > 10 ) {
			for ( auto u : v ) {
				if ( x % u == 0 ) {
					f = 1;
					break;
				}
			}

			if ( f ) break;
			else {
				for ( auto u : v ) {
					if ( x > u ) {
						x -= u;
						break;
					}
				}
			}
			// cout << x << "\n";
		}

		if ( f ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}