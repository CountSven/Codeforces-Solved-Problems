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
		int a[n+1][m+1];

		int mx = 0;

		for ( int i = 1; i <= n; i++ ) {
			for ( int j = 1; j <= m; j++ ) {
				cin >> a[i][j];
				mx = max( mx , a[i][j] );
			}
		}

		map<int, int> freqR, freqC;

		vector<int> idxR, idxC;

		int maxR = 0, maxC = 0, occ = 0;

		for ( int i = 1; i <= n; i++ ) {
			for ( int j = 1; j <= m; j++ ) {
				if ( a[i][j] == mx ) {
					occ++;
					freqR[i]++;
					freqC[j]++;
					maxR = max( maxR, freqR[i] );
					maxC = max( maxC, freqC[j] );
				}
			}
		}

		for ( int i = 1; i <= n; i++ ) {
			if ( freqR[i] == maxR ) idxR.push_back( i );
		}

		for ( int j = 1; j <= m; j++ ) {
			if ( freqC[j] == maxC ) idxC.push_back( j );
		}

		int f = 0;
		
		for ( auto curR : idxR ) {
			for ( auto curC : idxC ) {
				// cout << curR << " " << curC << "\n";
				
				int curOcc = freqR[curR] + freqC[curC];

				if ( a[curR][curC] == mx ) curOcc--;

				if ( curOcc == occ ) {
					mx--;
					f = 1;
					break;
				}
			}

			if ( f ) break;
		}

		cout << mx << "\n";
	}

	return 0;
}