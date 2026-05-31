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

		long long cnt = 0;

		for ( int i = 0; i+2 < n; i++ ) {
			for ( int j = i+1; j+1 < n; j++ ) {
				int cur = a[i] + a[j];
				int lb = lower_bound( a+j+1, a+n, cur ) - a;
				int rb = upper_bound( a+j+1, a+n, a[n-1] - cur ) - a;
				int l = max( j+1, rb );
				int r = lb - 1;
				cnt += max( 0, r - l + 1 );
				// cout << i << " " << j << " " << r << "\n";
			}
		}

		cout << cnt << "\n";
	}

	return 0;
}