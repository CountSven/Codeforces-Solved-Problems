#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, k;
		cin >> n >> k;

		if ( n % 2 ) cout << n / 2 << " " << n / 2 << " " << 1 << "\n";
		else {
			if ( ( n / 2 ) % 2 ) cout << ( n / 2 ) - 1 << " " << ( n / 2 ) - 1 << " " << 2 << "\n";
			else cout << n / 2 << " " << ( n / 2 ) / 2 << " " << ( n / 2 ) / 2 << "\n";
		}
	}

	return 0;
}