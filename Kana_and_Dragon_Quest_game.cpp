#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int x, n, m;
		cin >> x >> n >> m;

		while ( x > 0 && n > 0 && !( x <= 20 ) ) {
			x = floor( 1.0 * x / 2 ) + 10;
			n--;
// 			cout << x << " ";
		}

		while ( x > 0 && m > 0 ) {
			x -= 10;
			m--;
// 			cout << x << " ";
		}
		
// 		cout << "\n";

		if ( x <= 0 ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}