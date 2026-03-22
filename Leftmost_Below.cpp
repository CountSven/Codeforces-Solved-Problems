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
		long long a[n];

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		long long must = a[0] + a[0] - 1, f = 0;

		for ( int i = 1; i < n; i++ ) {
			if ( a[i] > must ) {
				f = 1;
				break;
			}
			else must = min( must, a[i] + a[i] - 1 );
		}

		if ( !f ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}