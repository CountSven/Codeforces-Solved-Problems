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

		for ( int i = 1; i * i <= x; i++ ) {
			if ( x % i ) continue;

			int div1 = x / i;
			int div2 = x / div1;

			if ( x / div1 >= n ) res = max( res, div1 );
			if ( x / div2 >= n ) res = max( res, div2 ); 
		}

		cout << res << "\n";
	}

	return 0;
}