#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, x;
		cin >> n >> x;

		long long res = 0;

		for ( int a = 1; a <= min( n, x ); a++ ) {
			for ( int b = 1; a * b <= n && a + b <= x; b++ ) {
				int c = min( ( n - a * b ) / ( a + b ), x - a - b );
				if ( c >= 1 ) res += c;
			}
		}

		cout << res << "\n";	
	}

	return 0;
}