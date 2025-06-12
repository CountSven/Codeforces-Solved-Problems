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

		for ( int i = 0; i < n; i++ ) cin >> a[i];
	
		bool isSorted = false;
		long long mnDiff = 1000000000;

		for ( int i = 1; i < n; i++ ) {
			long long diff = a[i] - a[i-1];
			if ( diff < 0 ) {
				isSorted = true;
				break;
			} else mnDiff = min( mnDiff, diff );			
		}

		if ( isSorted ) cout << 0 << "\n";
		else {
			long long res;

			if ( mnDiff == 0 ) res = 1;
			else res = ( mnDiff / 2 ) + 1;

			// cout << mnDiff << "\n";
			cout << res << "\n";
		}
	}

	return 0;
}