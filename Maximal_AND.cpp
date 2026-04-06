#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, k;
		cin >> n >> k;
		vector<string> v(n);

		for ( int i = 0; i < n; i++ ) {
			int x;
			cin >> x;
			string cur = "";

			while ( x ) {
				cur += ( x % 2 ) + '0';
				x /= 2;
			}

			while ( cur.size() < 31 ) cur += '0';

			reverse( cur.begin(), cur.end() );

			v[i] = cur;
		}

		// for ( auto u : v ) cout << u << "\n";
		// cout << "\n";

		for ( int i = 0; i < 32; i++ ) {
			int cnt = 0;

			for ( int j = 0; j < n; j++ ) {
				if ( v[j][i] == '0' ) cnt++; 
			}

			if ( cnt <= k ) {
				for ( int j = 0; j < n; j++ ) {
					if ( v[j][i] == '0' ) v[j][i] = '1'; 
				}
				k -= cnt;
			}
		}

		// for ( auto u : v ) cout << u << "\n";
		// cout << "\n";

		vector<long long> val(n);

		for ( int i = 0; i < n; i++ ) {
			reverse( v[i].begin(), v[i].end() );
			
			long long cur = 0;

			for ( int j = 0; j < 32; j++ ) {
				if ( v[i][j] == '1' ) cur += ( 1LL << j );
			}

			val[i] = cur;
		}

		// for ( auto u : val ) cout << u << " ";
		// cout << "\n";

		long long res = val[0];

		for ( int i = 1; i < n; i++ ) res &= val[i];

		cout << res << "\n";	
	}

	return 0;
}