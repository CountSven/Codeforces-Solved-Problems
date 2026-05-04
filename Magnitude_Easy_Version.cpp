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

		long long mn = 0, mx = 0;

		for ( int i = 0; i < n; i++ ) {
			int x;
			cin >> x;
			long long val1 = mn + x;
			long long val2 = abs( mn + x );
			long long val3 = mx + x;
			long long val4 = abs( mx + x );

			// cout << val1 << " " << val2 << " " << val3 << " " << val4 << "\n";
			mn = min( { val1, val2, val3, val4 } );
			mx = max( { val1, val2, val3, val4 } );
		}

		cout << max( abs( mn ), abs( mx ) ) << "\n";
	}

	return 0;
}