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
		vector<int> v(n+1), idxs;

		int cnt = 0;

		for ( int i = 1; i <= n; i++ ) {
			cin >> v[i];

			cnt += __builtin_ctz( v[i] );
			idxs.push_back( __builtin_ctz( i ) );
		}

		if ( cnt >= n ) cout << 0 << "\n";
		else {
			int res = 0;

			sort( idxs.rbegin(), idxs.rend() );

			for ( int i = 0; i < n; i++ ) {
				cnt += idxs[i];
				res++;

				if ( cnt >= n ) break;
			}

			if ( cnt >= n ) cout << res << "\n";
			else cout << -1 << "\n";
		}
	}

	return 0;
}