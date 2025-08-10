#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int q;
	cin >> q;

	while ( q-- ) {
		string s, t;
		cin >> s >> t;

		int n = s.size(), m = t.size();

		int gcd = __gcd( n, m );
		int lcm = n * ( m / gcd );

		string x, y;

		while ( x.size() < lcm ) x += s;
		while ( y.size() < lcm ) y += t;

		// cout << x << " " << y << "\n";

		if ( x == y ) cout << x << "\n";
		else cout << -1 << "\n";
	}

	return 0;
}