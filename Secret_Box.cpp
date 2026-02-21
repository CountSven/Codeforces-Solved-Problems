#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long x, y, z, k, res = 0;
		cin >> x >> y >> z >> k;

		for ( long long a = 1; a <= x; a++ ) {
			for ( long long b = 1; b <= y; b++ ) {
				if ( k % ( a * b ) == 0 ) {
					long long c = k / ( a * b );
					if ( c <= z ) {
						long long cur = ( x - a + 1 ) * ( y - b + 1 ) * ( z - c + 1 );
						res = max( res, cur );
					}
				}
			}
		}

		cout << res << "\n";
	}

	return 0;
}