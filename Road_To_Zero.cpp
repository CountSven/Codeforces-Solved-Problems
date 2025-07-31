#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long x, y, a, b;
		cin >> x >> y >> a >> b;

		if ( x < y ) swap( x, y );

		long long cnt = min( ( ( x - y ) * a + y * b ), ( ( x + y ) * a ) ); 


		cout << cnt << "\n";
	}

	return 0;
}