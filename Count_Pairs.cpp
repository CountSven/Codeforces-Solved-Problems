#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int q;
	cin >> q;

	while ( q-- ) {
		int k;
		cin >> k;

		if ( k < 0 ) cout << 0 << "\n";
		else {
			int rng = sqrt( k ) + 1;

			long long cnt = 1;

			for ( int i = 1; i <= rng; i++ ) {
				for ( int j = 0; j <= rng; j++ ) {
					if ( pow( i, 2 ) + pow( j, 2 ) <= k ) {
						// cout << i << " " << j << "\n";
						cnt += 4;
					}
				}
			}

			cout << cnt << "\n";
		}
	}

	return 0;
}