#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;
	
	while ( t-- ) {
		int n, m;
		cin >> n >> m;
		int a[n], b[m];

		for ( int i = 0; i < n; i++ ) cin >> a[i];
		for ( int i = 0; i < m; i++ ) cin >> b[i];

		sort( a, a+n );
		sort( b, b+m );

		long long sum = 0;
		
		int l = 0, r = n-1, curL = 0, curR = m-1;

		while ( l < r ) {
			if ( l == r ) break;

			int val1 = abs( a[l] - b[curL] );
			int val2 = abs( a[l] - b[curR] );
			int val3 = abs( a[r] - b[curL] );
			int val4 = abs( a[r] - b[curR] );

			if ( max( val1, max( val2, max( val3, val4 ) ) ) == val1 ) {
				sum += val1;
				l++;
				curL++;
			}
			else if ( max( val1, max( val2, max( val3, val4 ) ) ) == val2 ) {
				sum += val2;
				l++;
				curR--;
			}
			else if ( max( val1, max( val2, max( val3, val4 ) ) ) == val3 ) {
				sum += val3;
				r--;
				curL++;
			}
			else {
				sum += val4;
				r--;
				curR--;
			}
		}

		if ( l == r ) sum += max( abs( a[l] - b[curL] ), abs( a[l] - b[curR] ) );

		cout << sum << "\n";
	}

	return 0;
}