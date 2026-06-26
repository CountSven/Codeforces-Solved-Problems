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
		vector<int> v(n, n);

		for ( int i = 0, x, y; i < m; i++ ) {
			cin >> x >> y;
			x--, y--;
			if ( x > y ) swap( x, y );
			v[x] = min( v[x], y );
		}

		long long cnt = 0;

		for ( int i = n-1, j = n; i >= 0; i-- ) {
			j = min( j, v[i] );
			cnt += j - i;
		}

		cout << cnt << "\n";
	}

	return 0;
}