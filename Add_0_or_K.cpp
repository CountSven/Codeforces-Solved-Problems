#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long n, k;
		cin >> n >> k;
		long long a[n];

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		if ( k % 2 ) {
			for ( int i = 0; i < n; i++ ) {
				if ( a[i] % 2 ) a[i] += k;
			}
		}
		else {
			for ( int i = 0; i < n; i++ ) {
				long long req = a[i] % ( k + 1 );
				a[i] += ( k * req );
			}
		}

		for ( int i = 0; i < n; i++ ) cout << a[i] << " ";
		cout << "\n";
	}

	return 0;
}