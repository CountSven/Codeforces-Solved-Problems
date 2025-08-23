#include<bits/stdc++.h>
using namespace std;

long long div_up( long long a, long long b )
{
	return ( ( a + b - 1 ) / b );
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long x, y, k, a, b, c;
		cin >> x >> y >> k;

		a = ( y * k ) + k - 1;
		b = div_up( a, ( x - 1 ) );
		c = b + k;

		cout << c << "\n";
	}

	return 0;
}