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
		int a[n+1];

		if ( n == 3 ) {
			cout << "1 3 2" << "\n";
			continue;
		}

		int hf = n / 2;

		for ( int i = 1, j = 1; j <= hf; i += 2, j++ ) a[i] = j;
		for ( int i = 2, j = 1; j <= hf; i += 2, j++ ) a[i] = j;

		if ( hf % 2 == 0 ) {
			for ( int i = 2, j = 1; j <= hf; i += 2, j++ ) a[i] |= ( 1 << 30 );
		}
		else {
			for ( int i = 2, j = 1; j < hf; i += 2, j++ ) a[i] |= ( 1 << 30 );
			for ( int i = 4, j = 2; j <= hf; i += 2, j++ ) a[i] |= ( 1 << 29 );
		}

		if ( n % 2 ) a[n] = 0;

		for ( int i = 1; i <= n; i++ ) cout << a[i] << " \n"[i == n]; 
	}

	return 0;
}