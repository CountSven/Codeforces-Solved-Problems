#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n;
		cin >> n;

		if ( n % 2 == 0 ) cout << n /2 << " " << n / 2 << "\n";
		else {
			vector<int> divs;

			for ( int i = 3; i * i <= n; i++ ) {
				if ( n % i == 0 ) {
					divs.push_back( i );
					divs.push_back( n / i );
				}
			}

			if ( !divs.size() ) cout << 1 << " " << n - 1 << "\n";
			else {
				long long a, b, l = 2e18;

				for ( auto u : divs ) {
					long long curA = u;
					long long curB = n - u;
					long long curL = lcm( curA, curB );
					if ( curL < l ) {
						a = curA;
						b = curB;
						l = curL;
					}
				}

				cout << a << " " << b << "\n";
			}
		}
	}

	return 0;
}