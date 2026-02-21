#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long n;
		cin >> n;
		long long a[n];

		long long sum = 0;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			sum += a[i];
		}

		if ( ( sum * 2 ) % n ) cout << 0 << "\n";
		else {
			long long need = ( sum * 2 ) / n, cnt = 0;
			
			map<long long, long long> mp;

			for ( int i = 0; i < n; i++ ) {
				if ( a[i] <= need ) mp[a[i]]++;
			}

			for ( auto [x, y] : mp ) {
				if ( 2 * x == need ) cnt += ( ( y * ( y - 1 ) ) / 2 );
				else if ( 2 * x < need ) {
					if ( mp.find( need - x ) != mp.end() ) cnt += ( 1LL * y * mp[need - x] );
				}
				else break;
			}

			cout << cnt << "\n";
		}
	}

	return 0;
}