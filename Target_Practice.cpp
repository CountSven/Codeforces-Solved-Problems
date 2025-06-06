#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t;
	cin >> t;

	while ( t-- ) {
		char c[11][11];

		int cnt = 0;

		for ( int i = 1; i <= 10; i++ ) {
			for ( int j = 1; j <= 10; j++ ) {
				cin >> c[i][j];
				if ( c[i][j] == 'X' ) {
					cnt += min( { i, 11 - i, j, 11 - j } );
				}
			}
		}

		cout << cnt << "\n";
	}

	return 0;
}