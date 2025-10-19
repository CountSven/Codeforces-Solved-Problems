#include<bits/stdc++.h>
using namespace std;

bool primeChk( int n )
{
	for ( int i = 2; i < n; i++ ) {
		if ( n % i == 0 ) return false;
	}

	return true;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n;
		cin >> n;

		if ( n <= 4 ) cout << -1 << "\n";
		else {
			int lst = 0, val = 0;

			for ( int i = 2; i <= n; i += 2 ) {
				cout << i << " ";
				lst = i;
			}

			for ( int i = 1; i <= n; i += 2 ) {
				if ( !primeChk( lst + i ) ) {
					cout << i << " ";
					val = i;
					break;
				}
			}

			for ( int i = 1; i <= n; i += 2 ) {
				if ( i != val ) cout << i << " ";
			}
			cout << "\n";
		}
	}

	return 0;
}