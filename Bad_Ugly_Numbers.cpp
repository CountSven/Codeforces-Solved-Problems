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

		if ( n == 1 ) cout << -1 << "\n";
		else if ( n % 3 != 1 ) {
			for ( int i = 0; i < n-1; i++ ) cout << 2;
			cout << 3;
			cout << "\n";
		}
		else {
			for ( int i = 0; i < n-2; i++ ) cout << 2;
			cout << 33;
			cout << "\n";
		}
	}

	return 0;
}