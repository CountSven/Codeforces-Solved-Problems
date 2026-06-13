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

		if ( n == 1 ) cout << "FastestFinger" << "\n";
		else if ( n == 2 ) cout << "Ashishgup" << "\n";
		else if ( n % 2 ) cout << "Ashishgup" << "\n";
		else {
			int cur = 1;

			while ( n % 2 == 0 ) {
				n /= 2;
				cur *= 2;
			}

			if ( n == 1 ) cout << "FastestFinger" << "\n";
			else if ( cur >= 4 ) cout << "Ashishgup" << "\n";
			else {
				int pr = 1;

				for ( int i = 3; i * i <= n; i += 2 ) {
					if ( n % i == 0 ) {
						pr = 0;
						break;
					}
				}

				if ( pr ) cout << "FastestFinger" << "\n";
				else cout << "Ashishgup" << "\n";
			}
		}
	}  

	return 0;
}