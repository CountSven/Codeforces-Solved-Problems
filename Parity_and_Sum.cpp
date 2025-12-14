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
		long long a[n];

		long long odd = 0LL, tmp = 0LL;
		vector<long long> ev;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			if ( a[i] % 2 ) odd = max( odd, a[i] );
			else ev.push_back( a[i] );
		}

		tmp = odd;
		long long res = 0;

		if ( ev.size() > 0 && odd > 0) {
			sort( ev.begin(), ev.end() );

			// for ( auto u : ev ) cout << u << " ";
			// cout << "\n";

			long long cnt = 0;

			for ( int i = 0; i < (int)ev.size(); i++ ) {
				if ( ev[i] < odd ) {
					cnt++;
					odd += ev[i];
				}
				else {
					cnt += 2;
					odd += ev[i];
				}
			}

			res = cnt, odd = tmp;

			if ( ev.back() > odd ) cnt = (int)ev.size() + 1;

			// cout << res << " " << cnt << "\n";

			res = min( res, cnt );
		}

		cout << res << "\n";
	}

	return 0;
}