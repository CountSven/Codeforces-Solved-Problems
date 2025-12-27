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
		vector<int> row( 51, 0 ), col( 51, 0 );

		for ( int i = 0; i < n; i++ ) {
			for ( int j = 0; j < m; j++ ) {
				cin >> a[i][j];
				if ( a[i][j] ) {
					row[i] = 1;
					col[j] = 1;
				}
			}
		}

		int cnt = 0;

		for ( int i = 0; i < n; i++ ) {
			for ( int j = 0; j < m; j++ ) {
				if ( !row[i] && !col[j] ) {
					cnt++;
					row[i] = 1;
					col[j] = 1;
				}
			}
		}

		if ( cnt % 2 ) cout << "Ashish" << "\n";
		else cout << "Vivek" << "\n";
	} 

	return 0;
}