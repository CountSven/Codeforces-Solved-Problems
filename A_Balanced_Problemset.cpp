#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int x, n;
		cin >> x >> n;

		int res = 1;

		if ( n == 1 ) cout << x << "\n";
		else if ( 2 * n > x ) cout << res << "\n";
		else {
			for ( int i = 1; i * i <= x ; i++ ) {
				if ( x % i ) continue;

				int val1 = i;
				int val2 = x / i;

				if ( ( 1LL * ( n - 1 ) * val1 ) < x ) res = max( res, val1 );
				if ( ( 1LL * ( n - 1 ) * val2 ) < x ) res = max( res, val2 );
			}

			cout << res << "\n";
		}
	}

	return 0;
}