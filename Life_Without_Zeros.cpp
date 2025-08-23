#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b, c;
	cin >> a >> b;

	c = a + b;

	string s = to_string( c ), x = to_string( a ), y = to_string( b ), r, p, q;

	for ( int i = 0; i < s.size(); i++ ) {
		if ( s[i] != '0' ) r += s[i];
	}

	for ( int i = 0; i < x.size(); i++ ) {
		if ( x[i] != '0' ) p += x[i];
	}

	for ( int i = 0; i < y.size(); i++ ) {
		if ( y[i] != '0' ) q += y[i];
	}

	int d = stoi( r );

	a = stoi( p );
	b = stoi( q );
	c = a + b;

	// cout << c << " " << d << "\n";

	if ( c == d ) cout << "YES" << "\n";
	else cout << "NO" << "\n";

	return 0;
}