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
		int a[n][m];

		for ( int i = 0; i < n; i++ ) {
			for ( int j = 0; j < m; j++ ) cin >> a[i][j];
		}

		int mx = 0;

		for ( int i = 0; i < n; i++ ) {
			for ( int j = 0; j < m; j++ ) {
				int cur = 0;
				int f = i, s = j;

				while ( f >= 0 && f < n && s >= 0 && s < m ) {
					cur += a[f][s];
					f++;
					s++;
				}

				f = i;
				s = j;

				while ( f >= 0 && f < n && s >= 0 && s < m ) {
					cur += a[f][s];
					f++;
					s--;
				}

				f = i;
				s = j;

				while ( f >= 0 && f < n && s >= 0 && s < m ) {
					cur += a[f][s];
					f--;
					s++;
				}

				f = i;
				s = j;

				while ( f >= 0 && f < n && s >= 0 && s < m ) {
					cur += a[f][s];
					f--;
					s--;
				}

				cur -= ( a[i][j] * 3 );

				mx = max( mx, cur );
			}
		}

		cout << mx << "\n";
	}

	return 0;
}