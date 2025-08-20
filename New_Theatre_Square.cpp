#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, m, x, y;
		cin >> n >> m >> x >> y;
		char a[n][m];

		for ( int i = 0; i < n; i++ ) {
			for ( int j = 0; j < m; j++ ) cin >> a[i][j];
		}

		long long cnt = 0;

		if ( x <= ( y / 2 ) ) {
			for ( int i = 0; i < n; i++ ) {
				for ( int j = 0; j < m; j++ ) {
					if ( a[i][j] == '.' ) cnt += x;
				}
			}
		}
		else {
			for ( int i = 0; i < n; i++ ) {
				for ( int j = 0; j < m; ) {
					if ( a[i][j] == '.' && j + 1 < m && a[i][j+1] == '.' ) {
						cnt += y;
						j += 2;
					}
					else if ( a[i][j] == '.' ) {
						cnt += x;
						j++;
					}
					else j++;
				}
			}
		}

		cout << cnt << "\n";
	}

	return 0;
}