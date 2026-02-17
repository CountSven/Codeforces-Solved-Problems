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

		if ( is_sorted( a+1, a+1+n ) ) cout << 0 << "\n";
		else {
			long long diff = a[n-1] - a[n];

			if ( diff <= a[n-1] && a[n-1] <= a[n] ) {
				cout << n - 2 << "\n";
				
				for ( int i = 1; i <= n-2; i++ ) cout << i << " " << n-1 << " " << n << "\n";
			}
			else cout << -1 << "\n";
		}
	}

	return 0;
}