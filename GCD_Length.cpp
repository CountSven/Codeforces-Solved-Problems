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

		long long x = pow( 10, a-1 );
		long long y = pow( 10, b-1 );

		if ( max( x, y ) == x ) x += pow( 10, c-1 );
		else y += pow( 10, c-1 );

		cout << x << " " << y << "\n";
	}

	return 0;
}