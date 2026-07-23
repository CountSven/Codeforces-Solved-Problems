#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, q;
		cin >> n >> q;
		vector<long long> c(n), psum( n+1, 0 ), cnt1( n+1, 0 );

		for ( int i = 0; i < n; i++ ) {
			cin >> c[i];
			psum[i+1] += ( psum[i] +  c[i] );
			cnt1[i+1] += ( cnt1[i] + ( c[i] == 1 ) );
		}

		while ( q-- ) {
			int l, r;
			cin >> l >> r;

			if ( l == r ) cout << "NO" << "\n";
			else {
				long long sum = psum[r] - psum[l-1];
				int cur = cnt1[r] - cnt1[l-1];
				int rng = r - l + 1;
				sum -= rng;
				if ( sum >= cur ) cout << "YES" << "\n";
				else cout << "NO" << "\n";
			}
		}
	}

	return 0;
}