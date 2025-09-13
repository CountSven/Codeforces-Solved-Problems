#include<bits/stdc++.h>
using namespace std;

bool isSq( long long n )
{
	long long cur = sqrt( n );
	return cur * cur == n;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long n, cur1 = 8, cur2 = 16;
		cin >> n;

		if ( n % 2 ) cout << "NO" << "\n";
		else if ( n % 2 == 0 && ( isSq( n ) || isSq( n / 2 ) ) ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}