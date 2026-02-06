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

		sort( a, a+n );

		int cnt = 0;

		int l = 0, r = 0;

		while ( r < n ) {
			// cout << l << " " << r << "\n";
			int len = r - l + 1;

			if ( a[r] == len ) {
				cnt++;
				r++;
				l = r;
			}
			else r++;
		}

		cout << cnt << "\n";	
	}

	return 0;
}