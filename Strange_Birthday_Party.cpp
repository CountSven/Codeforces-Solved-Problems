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
		int a[n+1], b[m+1];

		for ( int i = 1; i <= n; i++ ) cin >> a[i];
		for ( int i = 1; i <= m; i++ ) cin >> b[i];
		
		sort( a+1, a+n+1 );
		reverse( a+1, a+n+1 );

		long long cost = 0, j = 1;

		for ( int i = 1; i <= n; i++ ) {
			int cur = a[i];

			if ( j > m ) cost += b[cur];
			else {
				if ( b[j] < b[cur] ) cost += b[j++];
				else cost += b[cur];
			}
		}

		cout << cost << "\n";
	}

	return 0;
}