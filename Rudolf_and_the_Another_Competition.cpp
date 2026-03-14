#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, m, h;
		cin >> n >> m >> h;
		long long a[m], psum[m];

		long long sc = 0, pt = 0, rank = 1;

		for ( int i = 0; i < n; i++ ) {
			for ( int j = 0; j < m; j++ ) cin >> a[j];
			
			sort( a, a+m );
			
			long long ct = 0, tm = 0, rt = h;

			for ( int j = 0; j < m; j++ ) {
				if ( !j ) psum[j] = a[j];
				else psum[j] = ( a[j] + psum[j-1] );

				if ( a[j] <= rt ) {
					ct++;
					tm += psum[j];
					rt -= a[j];
				}
				else break;
			}

			// cout << i << " " << ct << " " << tm << "\n";

			if ( !i ) {
				sc = ct;
				pt = tm;
			}
			else {
				if ( ct > sc ) rank++;
				else if ( ct == sc && tm < pt ) rank++;
			}
		}

		cout << rank << "\n";
	}

	return 0;
}