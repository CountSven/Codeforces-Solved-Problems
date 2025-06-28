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
		char a[n][m];

		int mnRowIdx = -1, mxRowIdx = -1, mnColIdx = -1, mxColIdx = -1;

		for ( int i = 0; i < n; i++ ) {
			for ( int j = 0; j < m; j++ ) {
				cin >> a[i][j];
				if ( a[i][j] == '#' ) {
					if ( mnRowIdx == -1 ) mnRowIdx = i+1;
					mxRowIdx = i+1;
				}
			}
		}

		for ( int j = 0; j < m; j++ ) {
			for ( int i = 0; i < n; i++ ) {
				if ( a[i][j] == '#' ) {
					if ( mnColIdx == -1 ) mnColIdx = j+1;
					mxColIdx = j+1;
				}
			}
		}

		int rMid = ( mnRowIdx + mxRowIdx ) / 2;
		int cMid = ( mnColIdx + mxColIdx ) / 2;

		cout << rMid << " " << cMid << "\n";
	}

	return 0;
}