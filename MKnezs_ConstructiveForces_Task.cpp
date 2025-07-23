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

		if ( n == 3 ) cout << "NO" << "\n";
		else {
			int x = ( n - 2 ) / 2;
			int y = ( n - 2 ) - x;

			if ( n == 2 ) {
				 x += 2;
				 y += 2;
			}

			cout << "YES" << "\n";
			for ( int i = 0; i < n; i++ ) {
				if ( i % 2 ) cout << y << " ";
				else cout << -x << " ";
			}

			cout << "\n";
		}
	}

	return 0;
}