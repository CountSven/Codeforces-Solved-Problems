#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n, m;
	cin >> n >> m;
	int a[n][m], mx = 0;

	for ( int i = 0; i < n; i++ ) {
		for ( int j = 0; j < m; j++ ) {
			cin >> a[i][j];
			mx = max( mx, a[i][j] );
		}
	}

	vector<int> row(n), col(m);

	int cnt = 0;

	for ( int i = 0; i < n; i++ ) {
		for ( int j = 0; j < m; j++ ) {
			if ( a[i][j] == mx ) {
				cnt++;
				row[i]++;
				col[j]++;
			}
		}
	}

	for ( int i = 0; i < n; i++ ) {
		for ( int j = 0; j < m; j++ ) {
			int curCnt = row[i] + col[j];
			
			if ( a[i][j] == mx ) curCnt--;

			if ( curCnt == cnt ) {
				cout << mx - 1 << "\n";
				return;
			}
		}
	}

	cout << mx << "\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) solve();

	return 0;
}