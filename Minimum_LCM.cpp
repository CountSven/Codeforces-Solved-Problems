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

		bool isFnd = false;

		for ( int i = 2; i * i <= n; i++ ) {
			if ( n % i == 0 ) {
				cout << n / i << " " << n - n / i << "\n";
				isFnd = true;
				break;
			}
		}

		if ( !isFnd ) cout << 1 << " " << n - 1 << "\n";
	}

	return 0;
}