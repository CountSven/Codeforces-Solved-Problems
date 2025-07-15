#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long n, k;
		cin >> n >> k;

		if ( n % 2 == 0 ) cout << n + ( 2 * k ) << "\n";
		else {
			for ( int i = 3; i <= n; i += 2 ) {
				if ( n % i == 0 ) {
					n += i;
					k--;
					break;
				}
			}

			cout << n + ( 2 * k ) << "\n"; 
		}
	}

	return 0;
}