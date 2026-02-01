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

		int ev = 0, od = 0;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];

			if ( a[i] % 2 ) od = 1;
			else ev = 1;
		}

		if ( od && ev ) cout << 2 << "\n";
		else {
			long long init = 4, res = 0;

			for ( long long i = init; i <= 1e17; i *= 2 ) {
				set<long long> cur;
				for ( int j = 0; j < n; j++ ) {
					cur.insert( a[j] % i );

					if ( cur.size() > 2 ) break;
				}

				if ( cur.size() == 2 ) {
					res = i;
					break;
				}
			}

			cout << res << "\n";
		}
	}

	return 0;
}