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
		vector<int> d(n), l(n), r(n);

		for ( int i = 0; i < n; i++ ) cin >> d[i];

		for ( int i = 0; i < n; i++ ) cin >> l[i] >> r[i];

		int curL = 0, curR = 0, f = 0;
		
		for ( int i = 0; i < n; i++ ) {
			if ( d[i] == -1 ) curR++;
			else if ( d[i] == 1 ) curL++, curR++;

			curL = max( curL, l[i] );
			curR = min( curR, r[i] );
			
			if ( curL > curR || curL > r[i] || curR < l[i] ) {
				f = 1;
				break;
			}
		}

		if ( f ) cout << -1 << "\n";
		else {
			int h = 0;

			for ( int i = 0; i < n; i++ ) {
				if ( d[i] == 1 ) h++;
				int j = i;
				while ( h < l[i] ) {
					if ( d[j] == -1 ) {
						d[j] = 1;
						h++;
					}
					j--;
				}
			}

			for ( int i = 0; i < n; i++ ) cout << ( d[i] == -1 ? 0 : d[i] ) << " \n"[i + 1 == n];
		}
	}

	return 0;
}