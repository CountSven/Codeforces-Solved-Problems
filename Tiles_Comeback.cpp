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

		int lCnt = 0, rCnt = 0;

		int lIdx = -1, rIdx = -1;

		for ( int i = 0; i < n; i++ ) {
			if ( a[i] == a[0] ) {
				lCnt++;
				lIdx = i;
			}

			if ( lCnt == k ) break;
		}

		if ( lCnt == k && a[0] != a[n-1] ) {
			for ( int i = n-1; i >= 0; i-- ) {
				if ( a[i] == a[n-1] ) {
					rCnt++;
					rIdx = i;
				}

				if ( rCnt == k ) break;
			}
		}

		if ( a[0] == a[n-1] && lCnt == k ) cout << "YES" << "\n";
		else if ( lCnt == k && rCnt == k && lIdx < rIdx ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}