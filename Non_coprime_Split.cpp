#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int l, r;
		cin >> l >> r;

		if ( r < 4 ) cout << -1 << "\n";
		else {
			int f = 0, val;

			if ( r % 2 ) {
				for ( int i = 3; i <= sqrt(r); i += 2 ) {
					if ( r % i == 0 ) {
						f = 1;
						val = i;
						break;
					}
				}
			}

			if ( r % 2 == 0 ) cout << r / 2 << " " << r / 2 << "\n";
			else if ( f ) cout << val << " " << r - val << "\n";
			else {
				if ( r - 1 >= l ) cout << ( r - 1 ) / 2 << " " << ( r - 1 ) / 2 << "\n";
				else cout << -1 << "\n";
			}
		}
	}

	return 0;
}