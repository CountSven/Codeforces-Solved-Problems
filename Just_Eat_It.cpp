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
		int a[n];

		long long sum = 0, cur = 0, best = 0;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			sum += a[i];
		}

		int f = 0;

		for ( int i = 0; i < n; i++ ) {
			cur += a[i];
			best = max( best, cur );
			if ( best >= sum && i != n-1 ) {
				f = 1;
				break;
			}
		}

		if ( f ) cout << "NO" << "\n";
		else {
			cur = 0, best = 0;

			for ( int i = n-1; i >= 0; i-- ) {
				cur += a[i];
				best = max( best, cur );
				if ( best >= sum && i != 0 ) {
					f = 1;
					break;
				}
			}

			if ( f ) cout << "NO" << "\n";
			else cout << "YES" << "\n";
		}
	} 

	return 0;
}