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
		vector<vector<int>> v(n, vector<int>(5));

		for ( int i = 0; i < n; i++ ) {
			for ( int j = 0; j < 5; j++ ) cin >> v[i][j];
		}

		int cur = 0;

		for ( int i = 0; i < n; i++ ) {
			int cnt = 0;
			for ( int j = 0; j < 5; j++ ) {
				if ( v[cur][j] > v[i][j] ) cnt++;
			}
			if ( cnt >= 3 ) cur = i;
		}

		for ( int i = 0; i < n; i++ ) {
			int cnt = 0;
			for ( int j = 0; j < 5; j++ ) {
				if ( v[cur][j] > v[i][j] ) cnt++;
			}
			if ( cnt >= 3 ) {
				cur = -1;
				break;
			}
		}

		if ( cur == -1 ) cout << cur << "\n";
		else cout << cur + 1 << "\n";
	}

	return 0;
}