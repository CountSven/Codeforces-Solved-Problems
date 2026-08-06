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
		string s;
		cin >> n >> m >> s;
		long long a[n][m];

		vector<long long> r(n), c(m);

		for ( int i = 0; i < n; i++ ) {
			for ( int j = 0; j < m; j++ ) {
				cin >> a[i][j];
				r[i] += a[i][j];
				c[j] += a[i][j];
			}
		}

		int i = 0, j = 0;

		for ( char ch : s ) {
			if ( ch == 'D' ) {
				a[i][j] = -r[i];
				r[i] += a[i][j];
				c[j] += a[i][j];
				i++;
			}
			else {
				a[i][j] = -c[j];
				r[i] += a[i][j];
				c[j] += a[i][j];
				j++;
			}
		}

		a[i][j] = -r[i];

		for ( int i = 0; i < n; i++ ) {
			for ( int j = 0; j < m; j++ ) cout << a[i][j] << " ";
			cout << "\n";
		}
	}

	return 0;
}