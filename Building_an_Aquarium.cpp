#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long n, x;
		cin >> n >> x;
		long long a[n+1];

		for ( int i = 1; i <= n; i++ ) cin >> a[i];

		sort( a+1, a+n+1 );

		// for ( int i = 1; i <= n; i++ ) cout << a[i] << " ";
		// cout << "\n";

		long long wCnt = 0, idx = 1, lst = a[1];

		for ( int i = 2; i <= n; i++ ) {
			// cout << wCnt << " ";
			if ( wCnt + ( ( a[i] - a[i-1] ) * (i-1) ) <= x ) {
				wCnt += ( ( a[i] - a[i-1] ) * (i-1) );
				idx = i;
				lst = a[i];
			}
			else break;
		}
		// cout << "\n";

		long long cur = x - wCnt;
		cur /= idx;

		// cout << wCnt << " " << cur << " " << now << "\n";
		cout << lst + cur << "\n"; 
	}

	return 0;
}