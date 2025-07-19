#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long a, b, c, d;
		cin >> a >> b >> c >> d;

		long long cur = min( b, d );
		b -= cur;
		d -= cur;

		if ( b >= 7 ) cout << '>' << "\n";
		else if ( d >= 7 ) cout << '<' << "\n";
		else {
			a *= ( pow(10, b ) );
			c *= ( pow(10, d ) );

			if ( a > c ) cout << '>' << "\n";
			else if ( a < c ) cout << '<' << "\n";
			else cout << '=' << "\n";
		}
	}

	return 0;
}