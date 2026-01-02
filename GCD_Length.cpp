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

		long long x = pow( 10, c-1 );
		long long y = pow( 10, c-1 );

		while ( x < ( long long )pow( 10, a - 1 ) ) x *= 2;
		while ( y < ( long long )pow( 10, b - 1 ) ) y *= 5;

		cout << x << " " << y << "\n";
	}

	return 0;
}