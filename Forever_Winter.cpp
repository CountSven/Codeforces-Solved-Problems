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
		vector<int> cnt( n, 0 );

		while ( m-- ) {
			int u, v;
			cin >> u >> v;
			u--;
			v--;
			cnt[u]++;
			cnt[v]++;
		}

		map<int, int> mp;

		for ( int i = 0; i < n; i++ ) {
			if ( cnt[i] != 1 ) mp[cnt[i]]++;
		}

		int x = -1, y = -1, cntX = 0, cntY = 0;

		for ( auto [a, b] : mp ) {
			if ( x == -1 ) {
				x = a;
				cntX = b;
			}
			else {
				y = a;
				cntY = b;
			}
		}

		// cout << x << " " << cntX << " | " << y << " " << cntY << "\n";

		if ( y == -1 ) cout << x << " " << x-1 << "\n";
		else {
			if ( cntX < cntY ) cout << x << " " << y-1 << "\n";
			else cout << y << " " << x-1 << "\n";
		}
	}

	return 0;
}