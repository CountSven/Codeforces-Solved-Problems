#include<bits/stdc++.h>
using namespace std;

bool isP( long long n )
{
	if ( n < 2 ) return false;

	for ( long long i = 2; i*i <= n; i++ ) {
		if ( n % i == 0 ) return false;
	}

	return true;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long x, k;
		cin >> x >> k;

		if ( k == 1 ) {
			if ( isP( x ) ) cout << "YES" << "\n";
			else cout << "NO" << "\n";
		}
		else {
			if ( x == 1 && k == 2 ) cout << "YES" << "\n";
			else cout << "NO" << "\n";
		}
	}

	return 0;
}