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
		int a[n];

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		sort( a, a+n );
		
		int i = 0, j = 1, f = 0;

		while ( i < n && j < n ) {
			if ( a[j] - a[i] < k ) j++;
			else if ( a[j] - a[i] > k ) i++;
			else {
				f = 1;
				break;
			}
		}

		if ( f ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}