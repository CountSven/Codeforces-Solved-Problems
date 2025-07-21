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
		vector<vector<int>> v( n+1, vector<int>(n+1) );
		vector<int> res( 2*n + 1 );
		vector<int> cnt( 2*n + 1 );

		for ( int i = 1; i <= n; i++ ) {
			for ( int j = 1; j <= n; j++ ) {
				cin >> v[i][j];
				res[i+j] = v[i][j];
				cnt[res[i+j]] = 1;
			}
		}

		for ( int i = 1; i <= 2*n; i++ ) {
			if ( cnt[i] == 0 ) res[1] = i;
		}

		for ( int i = 1; i <= 2*n; i++ ) cout << res[i] << " ";
		cout << "\n";
	}

	return 0;
}