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

		for ( int i = 1; i <= n; i++ ) cin >> a[i];

		reverse( a+1, a+n+1 );

		int val = a[1], cnt = 0;
		
		long long rng = 1;

		for ( int i = 2; i <= n; i++ ) {
			// cout << i << " " << rng << "\n";

			if ( a[i] == val ) {
				if ( rng < i ) rng++;
			}
			else {
				if ( rng < i ) {
					rng *= 2;
					cnt++;
				}
			}
		}

		cout << cnt << "\n";
	}

	return 0;
}