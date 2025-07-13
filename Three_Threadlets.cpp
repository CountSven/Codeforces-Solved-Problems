#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long a, b, c;
		cin >> a >> b >> c;

		long long g = __gcd( a, __gcd( b, c ) );

		a /= g;
		b /= g;
		c /= g;

		if ( a + b + c - 3 <= 3 ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}