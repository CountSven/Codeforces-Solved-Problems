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

		if ( n < 3 || n == 4 ) cout << -1 << "\n";
		else {
			int a = 0, b = 0, c = 0;

			if ( n % 3 == 2 ) {
				a = n / 3 - 1;
				b = 1;
			}
			else if ( n % 3 == 1 ) {
				a = n / 3 - 2;
				c = 1;
			}
			else a = n / 3;

			cout << a << " " << b << " " << c << "\n";
		}
	}

	return 0;
}